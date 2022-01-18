#include "TestColorPairCode.h"
#include "TeleColorCoder.h"


int main() {
	TestColorPairCode testColorPairCode;

    testColorPairCode.testNumberToPair(4, TeleColorCoder::WHITE, TeleColorCoder::BROWN);
    testColorPairCode.testNumberToPair(5, TeleColorCoder::WHITE, TeleColorCoder::SLATE);

    testColorPairCode.testPairToNumber(TeleColorCoder::BLACK, TeleColorCoder::ORANGE, 12);
    testColorPairCode.testPairToNumber(TeleColorCoder::VIOLET, TeleColorCoder::SLATE, 25);

    return 0;
}
