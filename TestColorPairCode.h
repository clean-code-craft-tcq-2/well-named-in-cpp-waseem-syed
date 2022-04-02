#ifndef TESTCOLORPAIRCODE_H
#define TESTCOLORPAIRCODE_H
#include <assert.h>
#include <string>
#include <iostream>
#include "TeleColorCoder.h"

class TestColorPairCode
{
public:
   TestColorPairCode();
   ~TestColorPairCode();
   void testNumberToPair(int pairNumber, TeleColorCoder::MajorColor expectedMajor, TeleColorCoder::MinorColor expectedMinor);
   void testPairToNumber(TeleColorCoder::MajorColor majorColor, TeleColorCoder::MinorColor minorColor, int expectedPairNumber);
};

void TestColorPairCode::testNumberToPair(int pairNumber, TeleColorCoder::MajorColor expectedMajor, TeleColorCoder::MinorColor expectedMinor)
{
    TeleColorCoder::ColorPair colorPair = TeleColorCoder::GetColorFromPairNumber(pairNumber);
    std::string  colorPairAsString = colorPair.convertColorPairToString(colorPair);
    std::cout << "Got pair " << colorPairAsString << std::endl;
    assert(colorPair.getMajorColor() == expectedMajor);
    assert(colorPair.getMinorColor() == expectedMinor);
}

void TestColorPairCode::testPairToNumber(TeleColorCoder::MajorColor majorColor, TeleColorCoder::MinorColor minorColor, int expectedPairNumber)
{
   TeleColorCoder::ColorPair colorPair;
   colorPair.setMajorColor(majorColor);
   colorPair.setMinorColor(minorColor);
   int pairNumber = TeleColorCoder::GetPairNumberFromColor(colorPair);
   std::cout << "Got pair number " << pairNumber << std::endl;
   assert(pairNumber == expectedPairNumber);
}

#endif		//TESTCOLORPAIRCODE_H