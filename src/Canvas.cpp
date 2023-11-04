#include "Canvas.h"
#include "Colors.h"

CRGB Canvas::leds_matrix[CANVAS_WIDTH * CANVAS_HEIGHT];

void Canvas::setPixel(const uint8_t x, const uint8_t y, const CHSV chsv) {
    uint16_t i;
    if (x >= CANVAS_WIDTH || y >= CANVAS_HEIGHT) {
        Canvas::leds_matrix[CANVAS_WIDTH - 1] = COLOR_RED;
    }
    if(!(y & 0x01)) {
        uint8_t reverseX = (CANVAS_WIDTH - 1) - x;
        i = (y * CANVAS_WIDTH) + reverseX;
    } else {
        i = (y * CANVAS_WIDTH) + x;
    }
    Canvas::leds_matrix[i] = chsv;
}

void Canvas::setAll(CHSV chsv, uint8_t min_x  /* = 0 */ , uint8_t min_y /* = 0 */,
                    uint8_t max_x /* = CANVAS_WIDTH */, uint8_t max_y /* = CANVAS_HEIGHT */) {
    for (uint8_t y = min_y; y < max_y; y ++) {
        for (uint8_t x = min_x; x < max_x; x ++) {
            Canvas::setPixel(x, y, chsv);
        }
    }
}

void Canvas::clearCanvas(uint8_t min_x  /* = 0 */ , uint8_t min_y /* = 0 */,
                         uint8_t max_x /* = CANVAS_WIDTH */, uint8_t max_y /* = CANVAS_HEIGHT */) {
    Canvas::setAll(COLOR_OFF, min_x, min_y, max_x, max_y);
}

void Canvas::setText(const char* text, CHSV chsv) {
    uint8_t x = 0;
    uint8_t y = 1;
    do {
        const Letters::Letter *letter = Letters::getLetter(*text);
        if (x + letter->lWidth >= CANVAS_WIDTH || *text == '\n') {
            x = 0;
            y += 7;
            if ((*text == ' ' || *text == '\n') && *(text + 1) != 0) {
                continue;
            }else if ((*text == ' ' || *text == '\n') && *(text + 1) == 0)  {
                break;
            }
        }
        if (y >= CANVAS_HEIGHT - Letters::letter_height) {
            break;
        }
        Canvas::setLetter(letter, x, y, chsv);
        x += letter->lWidth + 1;
    } while(*(++text));
}

void Canvas::setLetter(const Letters::Letter *letter, const uint8_t xOffset, const uint8_t yOffset, const CHSV chsv) {
    for (uint8_t i = 0; i < letter->lSize; i+=2) {
        setPixel(letter->lShape[i] + xOffset, letter->lShape[i + 1] + yOffset, chsv);
    }
}


void Canvas::drawFrame() {
    FastLED.show();
    FastLED.show();
    FastLED.show();
}


void Canvas::setup() {
    FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(Canvas::leds_matrix, CANVAS_HEIGHT * CANVAS_WIDTH).setCorrection(TypicalSMD5050);
    FastLED.setBrightness(BRIGHTNESS);
}

void Canvas::setPixelsFromBuffer(uint8_t *buffer) {
    for (uint16_t i = 0; i < CANVAS_WIDTH * CANVAS_HEIGHT; i++) {
        const uint16_t offset = i * 3;
        const uint8_t x = i % CANVAS_WIDTH;
        const uint8_t y = i / CANVAS_WIDTH;
        setPixel(x, y, rgb2hsv_approximate(CRGB(buffer[offset], buffer[offset + 1], buffer[offset + 2])));
    }
}


// Testing stuff

void Canvas::testRGB(){
    setAll(COLOR_RED);
    drawFrame();
    delay(5000);
    setAll(COLOR_GREEN);
    drawFrame();
    delay(5000);
    setAll(COLOR_BLUE);
    drawFrame();
    delay(5000);
}

void Canvas::testASCII(){
    const Letters::Letter *letter;
    for (unsigned char c = Letters::min_ascii; c <= Letters::max_ascii; c++) {
        letter = Letters::getLetter(c);
        setLetter(letter, 0, 1, COLOR_GREEN);
        drawFrame();
        delay(500);
        setLetter(letter, 0, 1, COLOR_OFF);
    }
}

void Canvas::testText() {
    const char *text = "The quick brown fox jumps over the lazy dog.";
    setText(text, COLOR_RED);
    drawFrame();
    delay(1000);
}
