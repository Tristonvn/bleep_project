
#include <iostream>
#include <string>
#include "functions.h"

int main()
{
    std::string word = "broccoli";
    std::string text = "I eat broccoli on occasion. I sometimes put cheese on top of the broccoli, isn't that bad.";
    std::cout << "Filter word: " << word << "\n";
    std::cout << "Sample text: " << text;
    bleep(word, text);
    std::cout << "\nFiltered text: " << text;
}
