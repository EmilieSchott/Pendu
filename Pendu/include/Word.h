#pragma once

#include <string>
#include <string_view>

std::string determineWord();
void displayWordState(std::string_view wordState, int& wordToGuessLength);