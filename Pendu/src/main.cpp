#include <iostream>
#include <string>
#include "../include/Word.h"
#include "../include/Letter.h"
#include "../include/Constants.h"
#include "../include/hangedMan.h"

using namespace std;

int main() 
{
	cout << "Bienvenue au jeu du Pendu !" << endl; 
	auto wordToGuess = determineWord();

	cout << "Mot a deviner :" << endl;
	auto wordToGuessLength = static_cast<int>(wordToGuess.length());
	auto wordState = string(wordToGuessLength, '-');
	displayWordState(wordState, wordToGuessLength);

	auto errorsNumber{ 0 };
	while (errorsNumber < ERROR_ALLOWDED && wordToGuess != wordState) {
		auto suggestedLetter = suggestLetter();
		auto replacedLettersNumber = replaceFoundLetter(suggestedLetter, wordToGuess, wordState, wordToGuessLength);
		displayWordState(wordState, wordToGuessLength);

		if (replacedLettersNumber == 0) {
			errorsNumber++;
			displayHangedMan(errorsNumber);
		}
	}

	return EXIT_SUCCESS;
}