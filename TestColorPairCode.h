#ifndef TESTCOLORPAIRCODE_H_
#define TESTCOLORPAIRCODE_H_

#include <assert.h>
#include "TeleColorCoder.h"
#include <iostream>

class TestColorPairCode
{
public:
   TestColorPairCode();
   ~TestColorPairCode();
   void testNumberToPair(int pairNumber, TeleColorCoder::MajorColor expectedMajor, TeleColorCoder::MinorColor expectedMinor);
   void testPairToNumber(TeleColorCoder::MajorColor major, TeleColorCoder::MinorColor minor, int expectedPairNumber);
};

TestColorPairCode::TestColorPairCode()
{
}

~TestColorPairCode::TestColorPairCode()
{
}

void TestColorPairCode::testNumberToPair(int pairNumber, TeleColorCoder::MajorColor expectedMajor, TeleColorCoder::MinorColor expectedMinor)
{
    TeleColorCoder::ColorPair colorPair = TeleColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void TestColorPairCode::testPairToNumber(TeleColorCoder::MajorColor major, TeleColorCoder::MinorColor minor, int expectedPairNumber)
{
   int pairNumber = TeleColorCoder::GetPairNumberFromColor(major, minor);
   std::cout << "Got pair number " << pairNumber << std::endl;
   assert(pairNumber == expectedPairNumber);
}
#endif//TESTCOLORPAIRCODE_H_
