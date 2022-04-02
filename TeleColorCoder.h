#ifndef TELECOLORCODER_H
#define TELECOLORCODER_H
#include <vector>
#include <string>

namespace TeleCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    std::vector<std::string > MajorColorNames {"White", "Red", "Black", "Yellow", "Violet"};
    std::vector<std::string > MinorColorNames {"Blue", "Orange", "Green", "Brown", "Slate"};
	
    class ColorPair {
        private:
            MajorColor m_majorColor;
            MinorColor m_minorColor;
        public:
            ColorPair(){}
	   ~ColorPair(){}
            MajorColor getMajorColor(){
		return m_majorColor;}
            MinorColor getMinorColor(){
		return m_minorColor;}
	   void setMajorColor(MajorColor majorColor){
		m_majorColor = majorColor;}
            void setMinorColor(MinorColor minorColor){
		m_minorColor = minorColor;}
            std::string convertColorPairToString(ColorPair colorPair){
	       std::string colorPairAsString = MajorColorNames[colorPair.getMajorColor()];
               colorPairAsString += " ";
               colorPairAsString += MinorColorNames[colorPair.getMinorColor()];
               return colorPairAsString;}
    };

    ColorPair GetColorFromPairNumber(int pairNumber){
       ColorPair colorPair;
       int zeroBasedPairNumber = pairNumber - 1;
       MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / MinorColorNames.size());
       colorPair.setMajorColor(majorColor);
       MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % MinorColorNames.size());
       colorPair.setMinorColor(minorColor);
       return colorPair;}
    int GetPairNumberFromColor(ColorPair colorPair){
	return colorPair.getMajorColor() * MinorColorNames.size() + colorPair.getMinorColor() + 1;}
}
#endif		//TELECOLORCODER_H_
