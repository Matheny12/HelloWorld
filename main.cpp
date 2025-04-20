#include <iostream>
#include "helloWorld.h"
#include "print.h"

using namespace std;

int main() {
	helloWorld hw;
	hw.run();
	print p;
	p.run(hw.userInput);

	return 0;
}