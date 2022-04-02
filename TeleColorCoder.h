#ifndef TELECOLORCODER_H_
#define TELECOLORCODER_H_

#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

namespace TeleColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

	std::vector<std::string > MajorColorNames {"White", "Red", "Black", "Yellow", "Violet"};
	
	std::vector<std::string > MinorColorNames {"Blue", "Orange", "Green", "Brown", "Slate"};
    int m_numberOfMinorColors = MinorColorNames.size();
	
    class ColorPair {
        private:
            MajorColor m_majorColor;
            MinorColor m_minorColor;
        public:
            ColorPair();
			~ColorPair();
            MajorColor getMajorColor();
            MinorColor getMinorColor();
		    void setMajorColor(MajorColor majorColor);
            void setMinorColor(MinorColor minorColor);
            std::string convertColorPairToString(ColorPair colorPair);
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(ColorPair colorPair);
}
#endif		//TELECOLORCODER_H_
