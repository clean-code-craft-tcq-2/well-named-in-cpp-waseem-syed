#include <iostream>
#include "TestColorPairCode.h"

using namespace TeleColorCoder;
int main() {
	TestColorPairCode testColorPairCode;

    testColorPairCode.testNumberToPair(4, WHITE, BROWN);
    testColorPairCode.testNumberToPair(5, WHITE, SLATE);

    testColorPairCode.testPairToNumber(BLACK, ORANGE, 12);
    testColorPairCode.testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
