import socket

# 创建 UDP 套接字
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# 绑定到一个特定的地址和端口，用于接收广播
server_address = ('', 9999)
sock.bind(server_address)

while True:
    print('\nWaiting to receive message...')
    data, address = sock.recvfrom(4096)
    print(f'Received {len(data)} bytes from {address}')
    print(data)
