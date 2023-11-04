#!/usr/bin/env python3

import socket
import time
from PIL import Image


with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect(("192.168.4.9", 80))
    # for i in range(2):
    #     s.sendall(b"red\n")
    #     data = s.recv(1024)
    #     print(f"Received {data!r}")
    #     time.sleep(0.3)
    #
    #     s.sendall(b"green\n")
    #     data = s.recv(1024)
    #     print(f"Received {data!r}")
    #     time.sleep(0.3)
    #
    #     s.sendall(b"blue\n")
    #     data = s.recv(1024)
    #     print(f"Received {data!r}")
    #     time.sleep(0.3)
    s.sendall(b"setPicture\n")
    with Image.open("pic.gif") as img:
        if img.mode != "RGB":
            img = img.convert("RGB")
        width, height = img.size
        pixels = list()
        for y in range(height):
            for x in range(width):
                coord = x, y
                pixel = img.getpixel(coord)
                pixels.append(pixel[0])
                pixels.append(pixel[1])
                pixels.append(pixel[2])
    print(pixels)
    bytePixels = bytearray(pixels)
    print(bytePixels)
    print(len(bytePixels))
    s.sendall(bytePixels)
    data = s.recv(1024)
    print(f"Received {data!r}")
