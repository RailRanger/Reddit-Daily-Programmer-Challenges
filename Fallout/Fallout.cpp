// Fallout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <vector>
int main()
{

	std::vector<std::string> words;
	const char * filename = "C:\\enable1.txt";
	std::ifstream myfile;
	std::string name;
	std::string line;
	std::string score;

	myfile.open(filename, std::ios::in);
	if (!myfile.is_open()) {
		std::cerr << "Can't open " << filename << "!\n";
	}
	else {
		while (myfile >> name >> score) {
			while (std::getline(myfile, line)) {
				words.push_back(line);
			}
		}
		myfile.close();



		std::string input = "";
		int inputi = 0;
		std::cout << "Difficulty (1-5)?" << std::endl;
		std::cin >> input;
		inputi = stoi(input);

		int length;
		int wordamt;


		switch (inputi) {
		case(1):
			length = 4;
			wordamt = 5;
			break;
		case(2):
			length = 6;
			wordamt = 7;
			break;
		case(3):
			length = 8;
			wordamt = 10;
			break;
		case(4):
			length = 10;
			wordamt = 12;
			break;
		case(5):
			length = 15;
			wordamt = 15;
			break;
		}
		std::srand(time(NULL));
		std::string *ptrstr = new std::string[wordamt];

		for (int i = 0; i < wordamt; i++) {
			int k = 0;

			while (words[k].size() != length) {
				k = std::rand() % words.size();
			}
			ptrstr[i] = words[k];

		}


		int chosenword = std::rand() % wordamt;

		for (int i = 0; i < wordamt; i++) {
			std::cout << ptrstr[i] << std::endl;
		}


		int correct = 0;
		int incorrect = 0;
		std::string userinput = "";
		while (incorrect != 4) {


			std::cout << "Guess(" << 4 - incorrect << " left)?";
			std::cin >> input;

			for (int i = 0; i < length; i++) {
				if (input[i] == ptrstr[chosenword][i]) {
					correct++;
				}



			}

			std::cout << correct << "/" << length << " correct\n";

			if (correct == length) {
				std::cout << "You win!\n";
				return 0;

			}
			incorrect++;

			correct = 0;
		}

		std::cout << "Game Over\n";

	}
	return 0;
}