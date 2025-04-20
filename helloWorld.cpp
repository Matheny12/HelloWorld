#include "helloWorld.h"

using namespace std;

void helloWorld::run() {
	while (userInput != "Hello World") {
		cout << "Type Hello World: ";
		getline(cin, userInput);
		if (userInput == "Hello World") {
			return;
		}
		else {
			cout << "You did not type \"Hello World\". Please try again." << endl;
		}
	}
}