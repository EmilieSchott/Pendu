#include <iostream>
#include <string>
#include "../include/Letter.h"

using namespace std;

char suggestLetter() {

	string input{"null"};
	while (input.size() != 1) {
		cout << "Proposez une lettre : ";
		cin >> input;
	}
	char letter = toupper(input[0]);
	return letter;

}