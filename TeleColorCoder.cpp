#include "TeleColorCoder.h"

namespace TeleColorCoder
{
ColorPair::ColorPair(MajorColor majorColor, MinorColor minorColor)
   : m_majorColor(majorColor)
   , m_minorColor(minorColor)
{
}

MajorColor ColorPair::getMajor()
{
   return m_majorColor;
}

MinorColor ColorPair::getMinor()
{
   return m_minorColor;
}

std::string ColorPair::ToString()
{
   std::string colorPairStr = MajorColorNames[m_majorColor];
   colorPairStr += " ";
   colorPairStr += MinorColorNames[m_minorColor];
   return colorPairStr;
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
   int zeroBasedPairNumber = pairNumber - 1;
   MajorColor majorColor = 
   (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
   MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
   return ColorPair(majorColor, minorColor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor)
{
   return major * numberOfMinorColors + minor + 1;
}

}//TeleColorCoder

