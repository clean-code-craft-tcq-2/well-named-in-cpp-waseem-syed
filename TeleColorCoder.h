#include <iostream>
#include <assert.h>

namespace TeleColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

	std::vector<string > MajorColorNames {"White", "Red", "Black", "Yellow", "Violet"};
	
	std::vector<string > MinorColorNames {"Blue", "Orange", "Green", "Brown", "Slate"};
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
            std::string convertColorPairToString();
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(ColorPair colorPair);
}

