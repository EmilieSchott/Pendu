#include <iostream>
#include <string>
#include "../include/word.h"
#include "../include/letter.h"
#include "../include/constants.h"
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
	while (errorsNumber < ALLOWDED_ERRORS_NUMBER && wordToGuess != wordState) {
		auto suggestedLetter = suggestLetter();
		auto replacedLettersNumber = replaceFoundLetter(suggestedLetter, wordToGuess, wordState, wordToGuessLength);
		displayWordState(wordState, wordToGuessLength);

		if (replacedLettersNumber == 0) {
			errorsNumber++;
			displayHangedMan(errorsNumber);
		}
	}

	if (errorsNumber == ALLOWDED_ERRORS_NUMBER) {
		cout << "Vous avez perdu ! Le mot etait : " << wordToGuess;
	}

	if (errorsNumber < ALLOWDED_ERRORS_NUMBER && wordToGuess == wordState) {
		cout << "Felicitations ! Vous avez gagne !" << endl;
	}

	return EXIT_SUCCESS;
}