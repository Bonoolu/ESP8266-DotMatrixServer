#include <ESP8266WiFi.h>
#include "Canvas.h"
#include "Colors.h"

const char *ssid = "test_wifi";
const char *password = "";

WiFiServer server(80);
uint8_t buffer[CANVAS_HEIGHT * CANVAS_WIDTH * 3];

void setup() {
    Canvas::setup();
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
    }
    server.begin();
}

void loop()
{
    WiFiClient client = server.accept();
    if (client)
    {
        while (client.connected())
        {
            if (client.available())
            {
                String line = client.readStringUntil('\n');
                if (line.equals("red")) {
                    Canvas::setAll(COLOR_RED);
                    Canvas::drawFrame();
                    client.printf("Executed successfully: %s\n", line.c_str());
                } else if (line.equals("green")) {
                    Canvas::setAll(COLOR_GREEN);
                    Canvas::drawFrame();
                    client.printf("Executed successfully: %s\n", line.c_str());
                } else if (line.equals("blue")) {
                    Canvas::setAll(COLOR_BLUE);
                    Canvas::drawFrame();
                    client.printf("Executed successfully: %s\n", line.c_str());
                }else if (line.equals("testRGB")) {
                    Canvas::testRGB();
                    client.printf("Executed successfully: %s\n", line.c_str());
                }else if (line.equals("testText")) {
                    Canvas::testText();
                    client.printf("Executed successfully: %s\n", line.c_str());
                }else if (line.equals("testASCII")) {
                    Canvas::testASCII();
                    client.printf("Executed successfully: %s\n", line.c_str());

                }else if (line.equals("setText")) {
                    line = client.readStringUntil('\n');
                    Canvas::setText(line.c_str(), COLOR_RED);
                    Canvas::drawFrame();
                    client.printf("Executed successfully: %s\n", line.c_str());
                }else if (line.equals("setPicture")) {
                    client.readBytes(buffer, CANVAS_HEIGHT * CANVAS_WIDTH * 3);
                    Canvas::setPixelsFromBuffer(buffer);
                    Canvas::drawFrame();
                    client.printf("Executed successfully: %s\n", line.c_str());
                }else if (line.equals("clear")) {
                    Canvas::clearCanvas();
                    Canvas::drawFrame();
                    client.printf("Executed successfully: %s\n", line.c_str());
                }else {
                    client.printf("Unknown Command: %s\n", line.c_str());
                }
            }
        }

        while (client.available()) {
            client.read();
        }
        client.stop();
    }
}

// Notes:
// https://arduino-esp8266.readthedocs.io/en/latest/esp8266wifi/server-examples.html
