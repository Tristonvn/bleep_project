#include <iostream>
#include <string>
#include "functions.h"

void bleep(std::string const &word, std::string &text) {

	std::string sampleText;
	int it = 0; //keep track of posistion of a word
	std::string asterWord = word;
	for (int i = 0; i < asterWord.length(); i++) {
		asterWord.replace(i, 1,"*");
	}


	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ' ' || text[i] == '.' || text[i] == ',') {

			if (sampleText == word) { 		
				text.replace(it, sampleText.length(), asterWord);
			}
			it = i+1;
			sampleText = "";
		}
		else {
			sampleText += text[i];
		}
	}
}