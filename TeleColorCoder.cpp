#include <TeleColorCoder.h>

namespace TeleColorCoder
{
ColorPair::ColorPair()
{
}
~ColorPair::ColorPair()
{
}

MajorColor ColorPair::getMajorColor()
{
   return m_majorColor;
}

MinorColor ColorPair::getMinorColor()
{
   return m_minorColor;
}

void ColorPair::setMajorColor(MajorColor majorColor)
{
	m_majorColor = majorColor;
}

void ColorPair::setMinorColor(MinorColor minorColor)
{
	m_minorColor = minorColor;
}

std::string ColorPair::convertColorPairToString(ColorPair colorPair)
{
   std::string colorPairAsString = MajorColorNames[colorPair.getMajorColor()];
   colorPairToPrint += " ";
   colorPairToPrint += MinorColorNames[colorPair.getMinorColor()];
   return colorPairAsString;
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
   ColorPair colorPair;
   int zeroBasedPairNumber = pairNumber - 1;
   MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / m_numberOfMinorColors);
   colorPair.setMajorColor(majorColor);
   MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % m_numberOfMinorColors);
   colorPair.setMinorColor(minorColor);
   return colorPair;
}

int GetPairNumberFromColor(ColorPair colorPair)
{
   return colorPair.getMajorColor() * m_numberOfMinorColors + colorPair.getMinorColor() + 1;
}

}//TeleColorCoder

