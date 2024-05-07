#include <iostream>

using namespace std;

#include <iostream>
#include <string>
#include "../include/Word.h"

int main() 
{
	cout << "Bienvenue au jeu du Pendu !" << endl; 
	auto wordToGuess = determineWord();

	return EXIT_SUCCESS;
}