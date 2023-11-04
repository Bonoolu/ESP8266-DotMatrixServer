#ifndef ESPDOTMATRIX_LETTERS_H
#define ESPDOTMATRIX_LETTERS_H

#define uint8_t unsigned char

class Letters {
public:
    struct Letter {
        const uint8_t lSize;
        const uint8_t lWidth;
        const uint8_t *lShape;
    };
    static constexpr unsigned char min_ascii = ' ';
    static constexpr unsigned char max_ascii = '~';
    static constexpr uint8_t letter_height = 5;
    static const Letter *getLetter(unsigned char l);
private:
    Letters() = default;
    // !
    static constexpr uint8_t ascii_33[8] = {0, 0, 0, 1, 0, 2, 0, 4};
    // "
    static constexpr uint8_t ascii_34[8] = {0, 0, 2, 0, 0, 1, 2, 1};
    // #
    static constexpr uint8_t ascii_35[32] = {1, 0, 3, 0, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 1, 2, 3, 2, 0, 3, 1, 3, 2, 3, 3,3, 4, 3, 1, 4, 3, 4};
    // $
    static constexpr uint8_t ascii_36[38] = {0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2, 3, 2, 4, 2, 2,3, 4, 3, 0, 4, 1, 4, 2, 4, 3, 4, 4, 4};
    // %
    static constexpr uint8_t ascii_37[14] = {0, 0, 4, 0, 3, 1, 2, 2, 1, 3, 0, 4, 4, 4};
    // &
    static constexpr uint8_t ascii_38[32] = {0, 0, 1, 0, 2, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2, 4, 2, 0, 3, 2, 3, 3, 3, 0,4, 1, 4, 2, 4, 4, 4};
    // '
    static constexpr uint8_t ascii_39[4] = {0, 0, 0, 1};
    // (
    static constexpr uint8_t ascii_40[10] = {1, 0, 0, 1, 0, 2, 0, 3, 1, 4};
    // )
    static constexpr uint8_t ascii_41[10] = {0, 0, 1, 1, 1, 2, 1, 3, 0, 4};
    // *
    static constexpr uint8_t ascii_42[10] = {0, 0, 2, 0, 1, 1, 0, 2, 2, 2};
    // +
    static constexpr uint8_t ascii_43[18] = {2, 0, 2, 1, 0, 2, 1, 2, 2, 2, 3, 2, 4, 2, 2, 3, 2, 4};
    // ,
    static constexpr uint8_t ascii_44[4] = {0, 3, 0, 4};
    // -
    static constexpr uint8_t ascii_45[6] = {0, 2, 1, 2, 2, 2};
    // .
    static constexpr uint8_t ascii_46[2] = {0, 4};
    // /
    static constexpr uint8_t ascii_47[10] = {4, 0, 3, 1, 2, 2, 1, 3, 0, 4};
    // 0
    static constexpr uint8_t ascii_48[16] = {1, 0, 0, 1, 2, 1, 0, 2, 2, 2, 0, 3, 2, 3, 1, 4};
    // 1
    static constexpr uint8_t ascii_49[16] = {1, 0, 0, 1, 1, 1, 1, 2, 1, 3, 0, 4, 1, 4, 2, 4};
    // 2
    static constexpr uint8_t ascii_50[16] = {0, 0, 1, 0, 2, 1, 1, 2, 0, 3, 0, 4, 1, 4, 2, 4};
    // 3
    static constexpr uint8_t ascii_51[14] = {0, 0, 1, 0, 2, 1, 1, 2, 2, 3, 0, 4, 1, 4};
    // 4
    static constexpr uint8_t ascii_52[18] = {0, 0, 2, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2, 2, 3, 2, 4};
    // 5
    static constexpr uint8_t ascii_53[18] = {0, 0, 1, 0, 2, 0, 0, 1, 0, 2, 1, 2, 2, 3, 0, 4, 1, 4};
    // 6
    static constexpr uint8_t ascii_54[16] = {1, 0, 2, 0, 0, 1, 0, 2, 1, 2, 0, 3, 2, 3, 1, 4};
    // 7
    static constexpr uint8_t ascii_55[14] = {0, 0, 1, 0, 2, 0, 2, 1, 1, 2, 1, 3, 1, 4};
    // 8
    static constexpr uint8_t ascii_56[14] = {1, 0, 0, 1, 2, 1, 1, 2, 0, 3, 2, 3, 1, 4};
    // 9
    static constexpr uint8_t ascii_57[16] = {1, 0, 0, 1, 2, 1, 1, 2, 2, 2, 2, 3, 0, 4, 1, 4};
    // :
    static constexpr uint8_t ascii_58[4] = {0, 1, 0, 3};
    // ;
    static constexpr uint8_t ascii_59[6] = {0, 1, 0, 3, 0, 4};
    // <
    static constexpr uint8_t ascii_60[10] = {2, 0, 1, 1, 0, 2, 1, 3, 2, 4};
    // =
    static constexpr uint8_t ascii_61[16] = {0, 1, 1, 1, 2, 1, 3, 1, 0, 3, 1, 3, 2, 3, 3, 3};
    // >
    static constexpr uint8_t ascii_62[10] = {0, 0, 1, 1, 2, 2, 1, 3, 0, 4};
    // ?
    static constexpr uint8_t ascii_63[14] = {1, 0, 2, 0, 3, 0, 0, 1, 3, 1, 2, 2, 2, 4};
    // @
    static constexpr uint8_t ascii_64[36] = {1, 0, 2, 0, 3, 0, 0, 1, 1, 1, 2, 1, 4, 1, 0, 2, 1, 2, 3, 2, 4, 2, 0, 3, 2,3, 3, 3, 1, 4, 2, 4, 3, 4, 4, 4};
    // A
    static constexpr uint8_t ascii_65[20] = {1, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2, 0, 3, 2, 3, 0, 4, 2, 4};
    // B
    static constexpr uint8_t ascii_66[20] = {0, 0, 1, 0, 0, 1, 2, 1, 0, 2, 1, 2, 0, 3, 2, 3, 0, 4, 1, 4};
    // C
    static constexpr uint8_t ascii_67[14] = {1, 0, 2, 0, 0, 1, 0, 2, 0, 3, 1, 4, 2, 4};
    // D
    static constexpr uint8_t ascii_68[20] = {0, 0, 1, 0, 0, 1, 2, 1, 0, 2, 2, 2, 0, 3, 2, 3, 0, 4, 1, 4};
    // E
    static constexpr uint8_t ascii_69[20] = {0, 0, 1, 0, 2, 0, 0, 1, 0, 2, 1, 2, 0, 3, 0, 4, 1, 4, 2, 4};
    // F
    static constexpr uint8_t ascii_70[16] = {0, 0, 1, 0, 2, 0, 0, 1, 0, 2, 1, 2, 0, 3, 0, 4};
    // G
    static constexpr uint8_t ascii_71[16] = {1, 0, 2, 0, 0, 1, 0, 2, 2, 2, 0, 3, 2, 3, 1, 4};
    // H
    static constexpr uint8_t ascii_72[22] = {0, 0, 2, 0, 0, 1, 2, 1, 0, 2, 1, 2, 2, 2, 0, 3, 2, 3, 0, 4, 2, 4};
    // I
    static constexpr uint8_t ascii_73[18] = {0, 0, 1, 0, 2, 0, 1, 1, 1, 2, 1, 3, 0, 4, 1, 4, 2, 4};
    // J
    static constexpr uint8_t ascii_74[12] = {2, 0, 2, 1, 2, 2, 2, 3, 0, 4, 1, 4};
    // K
    static constexpr uint8_t ascii_75[20] = {0, 0, 2, 0, 0, 1, 2, 1, 0, 2, 1, 2, 0, 3, 2, 3, 0, 4, 2, 4};
    // L
    static constexpr uint8_t ascii_76[14] = {0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 1, 4, 2, 4};
    // M
    static constexpr uint8_t ascii_77[30] = {0, 0, 1, 0, 3, 0, 0, 1, 2, 1, 4, 1, 0, 2, 2, 2, 4, 2, 0, 3, 2, 3, 4, 3, 0,4, 2, 4, 4, 4};
    // N
    static constexpr uint8_t ascii_78[20] = {0, 0, 1, 0, 0, 1, 2, 1, 0, 2, 2, 2, 0, 3, 2, 3, 0, 4, 2, 4};
    // O
    static constexpr uint8_t ascii_79[20] = {1, 0, 2, 0, 0, 1, 3, 1, 0, 2, 3, 2, 0, 3, 3, 3, 1, 4, 2, 4};
    // P
    static constexpr uint8_t ascii_80[16] = {0, 0, 1, 0, 0, 1, 2, 1, 0, 2, 1, 2, 0, 3, 0, 4};
    // Q
    static constexpr uint8_t ascii_81[18] = {1, 0, 0, 1, 2, 1, 0, 2, 2, 2, 0, 3, 2, 3, 1, 4, 2, 4};
    // R
    static constexpr uint8_t ascii_82[20] = {0, 0, 1, 0, 0, 1, 2, 1, 0, 2, 1, 2, 0, 3, 2, 3, 0, 4, 2, 4};
    // S
    static constexpr uint8_t ascii_83[14] = {1, 0, 2, 0, 0, 1, 1, 2, 2, 3, 0, 4, 1, 4};
    // T
    static constexpr uint8_t ascii_84[14] = {0, 0, 1, 0, 2, 0, 1, 1, 1, 2, 1, 3, 1, 4};
    // U
    static constexpr uint8_t ascii_85[20] = {0, 0, 2, 0, 0, 1, 2, 1, 0, 2, 2, 2, 0, 3, 2, 3, 1, 4, 2, 4};
    // V
    static constexpr uint8_t ascii_86[18] = {0,0, 2,0, 0,1, 2,1, 0,2, 2,2, 0,3, 2,3, 1,4};
    // W
    static constexpr uint8_t ascii_87[28] = {0, 0, 2, 0, 4, 0, 0, 1, 2, 1, 4, 1, 0, 2, 2, 2, 4, 2, 0, 3, 2, 3, 4, 3, 1,4, 3, 4};
    // X
    static constexpr uint8_t ascii_88[18] = {0, 0, 2, 0, 0, 1, 2, 1, 1, 2, 0, 3, 2, 3, 0, 4, 2, 4};
    // Y
    static constexpr uint8_t ascii_89[18] = {0, 0, 2, 0, 0, 1, 2, 1, 1, 2, 2, 2, 2, 3, 0, 4, 1, 4};
    // Z
    static constexpr uint8_t ascii_90[22] = {0,0, 1,0, 2,0, 3,0, 2,1, 1,2, 0,3, 0,4, 1,4, 2,4, 3,4};;
    // [
    static constexpr uint8_t ascii_91[14] = {0,0, 1,0, 0,1, 0,2, 0,3, 0,4, 1,4};
    // \ backslash
    static constexpr uint8_t ascii_92[10] = {0,0, 1,1, 2,2, 3,3, 4,4};
    // ]
    static constexpr uint8_t ascii_93[14] = {0,0, 1,0, 1,1, 1,2, 1,3, 0,4, 1,4};
    // ^
    static constexpr uint8_t ascii_94[6] = {1,0, 0,1, 2,1};
    // _
    static constexpr uint8_t ascii_95[8] = {0,4, 1,4, 2,4, 3,4};
    // `
    static constexpr uint8_t ascii_96[4] = {0,0, 1,1};
    // a
    static constexpr uint8_t ascii_97[24] = {0,0, 1,0, 2,0, 3,1, 1,2, 3,2, 0,3, 2,3, 3,3, 0,4, 1,4, 3,4};
    // b
    static constexpr uint8_t ascii_98[16] = {0,0, 0,1, 0,2, 1,2, 0,3, 2,3, 0,4, 1,4};
    // c
    static constexpr uint8_t ascii_99[12] = {1,1, 2,1, 0,2, 0,3, 1,4, 2,4};
    // d
    static constexpr uint8_t ascii_100[16] = {2,0, 2,1, 1,2, 2,2, 0,3, 2,3, 1,4, 2,4};
    // e
    static constexpr uint8_t ascii_101[16] = {0,1, 1,1, 2,1, 0,2, 2,2, 0,3, 1,4, 2,4};
    // f
    static constexpr uint8_t ascii_102[16] = {1,0, 2,0, 1,1, 0,2, 1,2, 2,2, 1,3, 1,4};
    // g
    static constexpr uint8_t ascii_103[18] = {1,0, 0,1, 2,1, 1,2, 2,2, 2,3, 0,4, 1,4, 2,4};
    // h
    static constexpr uint8_t ascii_104[18] = {0,0, 0,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 2,4};
    // i
    static constexpr uint8_t ascii_105[8] = {0,0, 0,2, 0,3, 0,4};
    // j
    static constexpr uint8_t ascii_106[10] = {1,0, 1,2, 1,3, 0,4, 1,4};
    // k
    static constexpr uint8_t ascii_107[16] = {0,0, 0,1, 0,2, 2,2, 0,3, 1,3, 0,4, 2,4};
    // l
    static constexpr uint8_t ascii_108[10] = {0,0, 0,1, 0,2, 0,3, 0,4};
    // m
    static constexpr uint8_t ascii_109[20] = {0,1, 0,2, 1,2, 3,2, 0,3, 2,3, 4,3, 0,4, 2,4, 4,4};
    // n
    static constexpr uint8_t ascii_110[14] = {0,1, 0,2, 1,2, 0,3, 2,3, 0,4, 2,4};
    // o
    static constexpr uint8_t ascii_111[8] = {1,2, 0,3, 2,3, 1,4};
    // p
    static constexpr uint8_t ascii_112[12] = {1,1, 0,2, 2,2, 0,3, 1,3, 0,4};
    // q
    static constexpr uint8_t ascii_113[12] = {1,1, 0,2, 2,2, 1,3, 2,3, 2,4};
    // r
    static constexpr uint8_t ascii_114[10] = {0,1, 0,2, 1,2, 0,3, 0,4};
    // s
    static constexpr uint8_t ascii_115[12] = {0,1, 1,1, 0,2, 1,3, 0,4, 1,4};
    // t
    static constexpr uint8_t ascii_116[16] = {1,0, 0,1, 1,1, 2,1, 1,2, 1,3, 1,4, 2,4};
    // u
    static constexpr uint8_t ascii_117[12] = {0,2, 2,2, 0,3, 2,3, 1,4, 2,4};
    // v
    static constexpr uint8_t ascii_118[10] = {0,2, 2,2, 0,3, 2,3, 1,4};
    // w
    static constexpr uint8_t ascii_119[16] = {0,2, 2,2, 4,2, 0,3, 2,3, 4,3, 1,4, 3,4};
    // x
    static constexpr uint8_t ascii_120[10] = {0,2, 2,2, 1,3, 0,4, 2,4};
    // y
    static constexpr uint8_t ascii_121[14] = {0,1, 2,1, 0,2, 2,2, 1,3, 2,3, 0,4};
    // z
    static constexpr uint8_t ascii_122[16] = {0,1, 1,1, 2,1, 2,2, 1,3, 0,4, 1,4, 2,4};
    // {
    static constexpr uint8_t ascii_123[14] = {1,0, 2,0, 1,1, 0,2, 1,3, 1,4, 2,4};
    // |
    static constexpr uint8_t ascii_124[10] = {0,0, 0,1, 0,2, 0,3, 0,4};
    // }
    static constexpr uint8_t ascii_125[14] = {0,0, 1,0, 1,1, 2,2, 1,3, 0,4, 1,4};
    // ~
    static constexpr uint8_t ascii_126[8] = {3,1, 1,2, 2,2, 0,3};
    static constexpr Letter asciiLetters[max_ascii - min_ascii + 1] = {
            // space
            Letter{.lSize = 0, .lWidth = 0, .lShape = nullptr},
            // !
            Letter{.lSize = 8, .lWidth = 1, .lShape = ascii_33},
            // "
            Letter{.lSize = 8, .lWidth = 3, .lShape = ascii_34},
            // #
            Letter{.lSize = 32, .lWidth = 5, .lShape = ascii_35},
            // $
            Letter{.lSize = 38, .lWidth = 5, .lShape = ascii_36},
            // %
            Letter{.lSize = 14, .lWidth = 5, .lShape = ascii_37},
            // &
            Letter{.lSize = 32, .lWidth = 5, .lShape = ascii_38},
            // '
            Letter{.lSize = 4, .lWidth = 1, .lShape = ascii_39},
            // (
            Letter{.lSize = 10, .lWidth = 2, .lShape = ascii_40},
            // )
            Letter{.lSize = 10, .lWidth = 2, .lShape = ascii_41},
            // *
            Letter{.lSize = 10, .lWidth = 3, .lShape = ascii_42},
            // +
            Letter{.lSize = 18, .lWidth = 5, .lShape = ascii_43},
            // ,
            Letter{.lSize = 4, .lWidth = 1, .lShape = ascii_44},
            // -
            Letter{.lSize = 6, .lWidth = 3, .lShape = ascii_45},
            // .
            Letter{.lSize = 2, .lWidth = 1, .lShape = ascii_46},
            // /
            Letter{.lSize = 10, .lWidth = 5, .lShape = ascii_47},
            // 0
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_48},
            // 1
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_49},
            // 2
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_50},
            // 3
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_51},
            // 4
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_52},
            // 5
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_53},
            // 6
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_54},
            // 7
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_55},
            // 8
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_56},
            // 9
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_57},
            // :
            Letter{.lSize = 4, .lWidth = 1, .lShape = ascii_58},
            // ;
            Letter{.lSize = 6, .lWidth = 1, .lShape = ascii_59},
            // <
            Letter{.lSize = 10, .lWidth = 3, .lShape = ascii_60},
            // =
            Letter{.lSize = 16, .lWidth = 4, .lShape = ascii_61},
            // >
            Letter{.lSize = 10, .lWidth = 3, .lShape = ascii_62},
            // ?
            Letter{.lSize = 14, .lWidth = 4, .lShape = ascii_63},
            // @
            Letter{.lSize = 36, .lWidth = 5, .lShape = ascii_64},
            // A
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_65},
            // B
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_66},
            // C
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_67},
            // D
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_68},
            // E
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_69},
            // F
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_70},
            // G
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_71},
            // H
            Letter{.lSize = 22, .lWidth = 3, .lShape = ascii_72},
            // I
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_73},
            // J
            Letter{.lSize = 12, .lWidth = 3, .lShape = ascii_74},
            // K
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_75},
            // L
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_76},
            // M
            Letter{.lSize = 30, .lWidth = 5, .lShape = ascii_77},
            // N
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_78},
            // O
            Letter{.lSize = 20, .lWidth = 4, .lShape = ascii_79},
            // P
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_80},
            // Q
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_81},
            // R
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_82},
            // S
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_83},
            // T
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_84},
            // U
            Letter{.lSize = 20, .lWidth = 3, .lShape = ascii_85},
            // V
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_86},
            // W
            Letter{.lSize = 28, .lWidth = 5, .lShape = ascii_87},
            // X
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_88},
            // Y
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_89},
            // Z
            Letter{.lSize = 22, .lWidth = 4, .lShape = ascii_90},
            // [
            Letter{.lSize = 14, .lWidth = 2, .lShape = ascii_91},
            // \ Backslash
            Letter{.lSize = 10, .lWidth = 5, .lShape = ascii_92},
            // ]
            Letter{.lSize = 14, .lWidth = 2, .lShape = ascii_93},
            // ^
            Letter{.lSize = 6, .lWidth = 3, .lShape = ascii_94},
            // _
            Letter{.lSize = 8, .lWidth = 4, .lShape = ascii_95},
            // `
            Letter{.lSize = 4, .lWidth = 2, .lShape = ascii_96},
            // a
            Letter{.lSize = 24, .lWidth = 4, .lShape = ascii_97},
            // b
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_98},
            // c
            Letter{.lSize = 12, .lWidth = 3, .lShape = ascii_99},
            // d
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_100},
            // e
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_101},
            // f
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_102},
            // g
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_103},
            // h
            Letter{.lSize = 18, .lWidth = 3, .lShape = ascii_104},
            // i
            Letter{.lSize = 8, .lWidth = 1, .lShape = ascii_105},
            // j
            Letter{.lSize = 10, .lWidth = 2, .lShape = ascii_106},
            // k
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_107},
            // l
            Letter{.lSize = 10, .lWidth = 1, .lShape = ascii_108},
            // m
            Letter{.lSize = 20, .lWidth = 5, .lShape = ascii_109},
            // n
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_110},
            // o
            Letter{.lSize = 8, .lWidth = 3, .lShape = ascii_111},
            // p
            Letter{.lSize = 12, .lWidth = 3, .lShape = ascii_112},
            // q
            Letter{.lSize = 12, .lWidth = 3, .lShape = ascii_113},
            // r
            Letter{.lSize = 10, .lWidth = 2, .lShape = ascii_114},
            // s
            Letter{.lSize = 12, .lWidth = 2, .lShape = ascii_115},
            // t
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_116},
            // u
            Letter{.lSize = 12, .lWidth = 3, .lShape = ascii_117},
            // v
            Letter{.lSize = 10, .lWidth = 3, .lShape = ascii_118},
            // w
            Letter{.lSize = 16, .lWidth = 5, .lShape = ascii_119},
            // x
            Letter{.lSize = 10, .lWidth = 3, .lShape = ascii_120},
            // y
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_121},
            // z
            Letter{.lSize = 16, .lWidth = 3, .lShape = ascii_122},
            // {
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_123},
            // |
            Letter{.lSize = 10, .lWidth = 1, .lShape = ascii_124},
            // }
            Letter{.lSize = 14, .lWidth = 3, .lShape = ascii_125},
            // ~
            Letter{.lSize = 8, .lWidth = 4, .lShape = ascii_126}
    };
};
#endif