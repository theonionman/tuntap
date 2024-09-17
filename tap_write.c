#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <linux/if_tun.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024
#define PORT 8888

// 函数用于创建 tap 设备
int create_tap_device() {
    int tap_fd;
    struct ifreq ifr;
    // 打开 /dev/net/tun 设备文件
    if ((tap_fd = open("/dev/net/tun", O_RDWR)) < 0) {
        perror("open /dev/net/tun");
        return -1;
    }
    memset(&ifr, 0, sizeof(ifr));
    strncpy(ifr.ifr_name, "tap0", IFNAMSIZ);
    ifr.ifr_flags = IFF_TAP | IFF_NO_PI;
    // 尝试创建 tap0 设备
    if (ioctl(tap_fd, TUNSETIFF, (void *)&ifr) < 0) {
        perror("ioctl TUNSETIFF");
        close(tap_fd);
        return -1;
    }
    return tap_fd;
}

int print_msg(const char *title, char *msg, int len)
{
    printf("\r\n%s\r\n", title);
    printf("[msg start:\r\n");
    for (int i = 0; i < len; i++) {
        printf("%02x ", (unsigned char)msg[i]);
    }
    printf("\r\nmsg end]:\r\n");
}

int main() {
    int tap_fd;
    // char buffer[1500];
    // 创建 tap 设备
    if ((tap_fd = create_tap_device()) < 0) {
        fprintf(stderr, "Failed to create tap device\n");
        return -1;
    }

    int sockfd;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_len = sizeof(client_addr);
    char buffer[BUFFER_SIZE];

    // 创建 UDP 套接字
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // 绑定套接字
    if (bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    while (1) {
        ssize_t len = recvfrom(sockfd, buffer, BUFFER_SIZE - 1, 0, (struct sockaddr *)&client_addr, &client_addr_len);
        if (len > 0) {
            print_msg("recv msg from veth", buffer, len);
            int ret = write(tap_fd, buffer, len);
            printf("\r\n send msg to tap0: %d\r\n", ret);
        }
    }

    close(sockfd);

    // 模拟一个简单的以太网帧（这里只是一个示例）
    // memset(buffer, 0xff, 6);  // 目的 MAC 地址
    // memset(buffer + 6, 0x00, 6);  // 源 MAC 地址
    // memset(buffer + 12, 0x08, 2);  // 以太网类型（这里假设是 IPv4）
    // 写入报文到 tap 设备
    close(tap_fd);
    return 0;
}