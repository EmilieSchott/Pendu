#include <string>
#include <random>

#include "../include/Word.h"
#include "../include/Constants.h"

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
