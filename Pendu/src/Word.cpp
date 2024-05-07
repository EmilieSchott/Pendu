#include <iostream>
#include <string>
#include <random>
#include <string_view>

#include "../include/word.h"
#include "../include/constants.h"

using namespace std;

string determineWord()
{
	string wordToGuess{ " " };

	auto indiceMax = POSSIBLE_WORDS_NUMBER - 1;
	auto generator = mt19937{ std::random_device{}() };
	auto distribution = uniform_int_distribution<int>{ 0, indiceMax };
	wordToGuess = POSSIBLE_WORDS[distribution(generator)];

	return wordToGuess;
}

void displayWordState(string_view wordState, int& wordToGuessLength) {
	for (auto i{ 0 }; i < wordToGuessLength; i++) {
		cout << wordState[i];
		if (i != wordToGuessLength - 1) {
			cout << " ";
		}
	}
	cout << endl;
}
