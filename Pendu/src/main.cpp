#include <iostream>
#include <string>
#include "../include/Word.h"
#include "../include/Letter.h"
#include "../include/Constants.h"

using namespace std;

int main() 
{
	cout << "Bienvenue au jeu du Pendu !" << endl; 
	auto wordToGuess = determineWord();

	cout << "Mot a deviner :" << endl;
	auto wordToGuessLength = static_cast<int>(wordToGuess.length());
	auto wordState = string(wordToGuessLength, '-');
	displayWordState(wordState, wordToGuessLength);

	auto errorNumber{ 0 };
	while (errorNumber < ERROR_ALLOWDED && wordToGuess != wordState) {
		auto suggestedLetter = suggestLetter();
		auto replacedLettersNumber = replaceFoundLetter(suggestedLetter, wordToGuess, wordState, wordToGuessLength);
		displayWordState(wordState, wordToGuessLength);
	}

	return EXIT_SUCCESS;
}