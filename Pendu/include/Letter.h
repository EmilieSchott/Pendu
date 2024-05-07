#pragma once

#include <string>
#include <string_view>

char suggestLetter();
int replaceFoundLetter(char letter, std::string_view wordToGuess, std::string& wordState, int const& wordToGuessLength);
