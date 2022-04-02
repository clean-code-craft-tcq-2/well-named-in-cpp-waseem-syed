#ifndef TESTCOLORPAIRCODE_H_
#define TESTCOLORPAIRCODE_H_
#include <assert.h>
#include <string>
#include <iostream>
#include "TeleColorCoder.h"

class TestColorPairCode
{
public:
   TestColorPairCode();
   ~TestColorPairCode();
   void testNumberToPair(int pairNumber, TeleCoColorCoder::MajorColor expectedMajor, TeleCoColorCoder::MinorColor expectedMinor);
   void testPairToNumber(TeleCoColorCoder::MajorColor majorColor, TeleCoColorCoder::MinorColor minorColor, int expectedPairNumber);
};

TestColorPairCode::TestColorPairCode()
{
}
TestColorPairCode::~TestColorPairCode()
{
}
void TestColorPairCode::testNumberToPair(int pairNumber, TeleCoColorCoder::MajorColor expectedMajor, TeleCoColorCoder::MinorColor expectedMinor)
{
    TeleCoColorCoder::ColorPair colorPair = TeleCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::string  colorPairAsString = colorPair.convertColorPairToString(colorPair);
    std::cout << "Got pair " << colorPairAsString << std::endl;
    assert(colorPair.getMajorColor() == expectedMajor);
    assert(colorPair.getMinorColor() == expectedMinor);
}

void TestColorPairCode::testPairToNumber(TeleCoColorCoder::MajorColor majorColor, TeleCoColorCoder::MinorColor minorColor, int expectedPairNumber)
{
   TeleCoColorCoder::ColorPair colorPair;
   colorPair.setMajorColor(majorColor);
   colorPair.setMinorColor(minorColor);
   int pairNumber = TeleCoColorCoder::GetPairNumberFromColor(colorPair);
   std::cout << "Got pair number " << pairNumber << std::endl;
   assert(pairNumber == expectedPairNumber);
}

#endif		//TESTCOLORPAIRCODE_H