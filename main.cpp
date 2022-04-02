#include "TestColorPairCode.h"

void displayColorCoding()
{
   for (int majorColorIndex = 0; majorColorIndex < MajorColorNames.size(); ++majorColorIndex)
   {
      for (int minorColorIndex = 0; minorColorIndex < MinorColorNames.size(); ++minorColorIndex)
      {
	  cout<< MajorColorNames[majorColorIndex]<<"\t"<<MinorColorNames[minorColorIndex]<<"\t\t"<<indexMajorColor + 1<<" "<< indexMinorColor + 1<<"\n";
      }
      cout<<"\n";
   }
}
int main() {
    TestColorPairCode testColorPairCode;
    testColorPairCode.testNumberToPair(4, TeleCoColorCoder::WHITE, TeleCoColorCoder::BROWN);
    testColorPairCode.testNumberToPair(5, TeleCoColorCoder::WHITE, TeleCoColorCoder::SLATE);
    testColorPairCode.testPairToNumber(TeleCoColorCoder::BLACK, TeleCoColorCoder::ORANGE, 12);
    testColorPairCode.testPairToNumber(TeleCoColorCoder::VIOLET, TeleCoColorCoder::SLATE, 25);
	
    displayColorCoding();
    return 0;
}
