#include <iostream>
#include <string>
#include "../include/Word.h"
#include "../include/Letter.h"

using namespace std;

int main() 
{
	cout << "Bienvenue au jeu du Pendu !" << endl; 
	auto wordToGuess = determineWord();

	cout << "Mot a deviner :" << endl;
	auto wordToGuessLength = static_cast<int>(wordToGuess.length());
	auto wordState = string(wordToGuessLength, '-');
	displayWordState(wordState, wordToGuessLength);

	char suggestedLetter = suggestLetter();

	return EXIT_SUCCESS;
}