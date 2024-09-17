import socket

# 创建 UDP 套接字
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# 允许发送广播消息
sock.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)

# 广播的地址和端口
broadcast_addr = ('192.168.1.255', 9999)

# 发送的消息
message = b"Hello, this is a UDP broadcast message"

# 发送广播报文
sock.sendto(message, broadcast_addr)

# 关闭套接字
sock.close()
