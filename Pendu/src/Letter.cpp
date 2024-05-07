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
	auto letter = toupper(input[0]);
	return letter;

}

int replaceFoundLetter(char letter, string_view wordToGuess, string& wordState, int const& wordToGuessLength) {
	auto replacedLettersNumber{ 0 };
	for (auto i{ 0 }; i < wordToGuessLength; i++) {
		if (letter == wordToGuess[i]) {
			wordState[i] = letter;
			replacedLettersNumber++;
		}
	}

	return replacedLettersNumber;
}