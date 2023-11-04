#include "Letters.h"

const Letters::Letter* Letters::getLetter(unsigned char l) {
    if (l < min_ascii || l > max_ascii) {
        l = '#';
    }
    return &(asciiLetters[l - min_ascii]);
}