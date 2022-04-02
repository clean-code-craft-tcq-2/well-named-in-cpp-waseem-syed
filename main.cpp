#include "TestColorPairCode.h"

void displayColorCoding()
{
   for (int majorColorIndex = 0; majorColorIndex < TeleCoColorCoder::MajorColorNames.size(); ++majorColorIndex)
   {
      for (int minorColorIndex = 0; minorColorIndex < TeleCoColorCoder::MinorColorNames.size(); ++minorColorIndex)
      {
	  std::cout<< TeleCoColorCoder::MajorColorNames[majorColorIndex]<<"\t"<<TeleCoColorCoder::MinorColorNames[minorColorIndex]<<"\t\t"<<majorColorIndex + 1<<" "<< majorColorIndex + 1<<"\n";
      }
      std::cout<<"\n";
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
