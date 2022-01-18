#ifndef TELECOLORCODER_H_
#define TELECOLORCODER_H_


#include <iostream>
#include <assert.h>

namespace TeleColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
        private:
            MajorColor m_majorColor;
            MinorColor m_minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };

    static ColorPair GetColorFromPairNumber(int pairNumber);
    static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif//TELECOLORCODER_H_
