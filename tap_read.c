#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <linux/if_tun.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024
#define PORT 8888
#define NS1_IP "10.0.0.1"
#define NS2_IP "10.0.0.2"

// 创建 TAP 设备
int create_tap_device() {
    int tap_fd;
    struct ifreq ifr;

    // 打开 /dev/net/tun
    tap_fd = open("/dev/net/tun", O_RDWR);
    if (tap_fd < 0) {
        perror("Open /dev/net/tun failed");
        return -1;
    }

    // 配置 TAP 设备
    memset(&ifr, 0, sizeof(ifr));
    ifr.ifr_flags = IFF_TAP | IFF_NO_PI;
    strncpy(ifr.ifr_name, "tap0", IFNAMSIZ);

    // 使用 ioctl 创建设备
    if (ioctl(tap_fd, TUNSETIFF, (void *)&ifr) < 0) {
        perror("ioctl TUNSETIFF failed");
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
    unsigned char buffer[2048];
    ssize_t nread;

    // 创建 TAP 设备
    tap_fd = create_tap_device();
    if (tap_fd < 0) {
        fprintf(stderr, "Failed to create TAP device\n");
        return 1;
    }


    int sockfd;
    struct sockaddr_in server_addr;
    // char buffer[BUFFER_SIZE];

    // 创建 UDP 套接字
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr(NS2_IP);

    // while (1) {
    //     printf("Enter a message to send: ");
    //     fgets(buffer, BUFFER_SIZE, stdin);
    //     sendto(sockfd, buffer, strlen(buffer), 0, (struct sockaddr *)&server_addr, sizeof(server_addr));
    // }

    while (1) {
        // 从 TAP 设备读取数据
        nread = read(tap_fd, buffer, sizeof(buffer));
        // printf("\r\nRead %u Bytes From Tap0:\r\n", nread);
        if (nread > 0) {
            print_msg("recv msg from tap0, send it to veth", buffer, nread);
            sendto(sockfd, buffer, nread, 0, (struct sockaddr *)&server_addr, sizeof(server_addr));
        } else {
            perror("Read from TAP device failed");
        }
        // 可以添加适当的延迟或者其他处理逻辑
        usleep(100000);
    }

    // 关闭 TAP 设备
    close(tap_fd);
    close(sockfd);

    return 0;
}
