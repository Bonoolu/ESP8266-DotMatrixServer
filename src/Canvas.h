#ifndef ESPDOTMATRIX_CANVAS_H
#define ESPDOTMATRIX_CANVAS_H

#include <FastLED.h>
#include "Letters.h"

#define LED_PIN  2

#define COLOR_ORDER GRB
#define CHIPSET WS2811

#define BRIGHTNESS 64

#define CANVAS_WIDTH 21
#define CANVAS_HEIGHT 14


class Canvas
{
public:
    static void setPixel(const uint8_t, const uint8_t, CHSV);
    static void drawFrame();
    static void setup();
    static void setAll(CHSV, uint8_t min_x = 0, uint8_t min_y = 0, uint8_t max_x = CANVAS_WIDTH, uint8_t max_y = CANVAS_HEIGHT);
    static void clearCanvas(uint8_t min_x = 0, uint8_t min_y = 0, uint8_t max_x = CANVAS_WIDTH, uint8_t max_y = CANVAS_HEIGHT);
    static void setText(const char*, CHSV);
    static void setLetter(const Letters::Letter*, const uint8_t, const uint8_t, CHSV);
    static void testText();
    static void testASCII();
    static void testRGB();
    static void setPixelsFromBuffer(uint8_t*);
private:
    Canvas() = default;
    static CRGB leds_matrix[];
};

#endif