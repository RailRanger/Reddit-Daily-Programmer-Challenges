#include "stdafx.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#pragma warning(disable:4996)
using namespace std;





int isvalid(string str) {


	int isvalid = 1;
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == 'c') {
			if (str[i + 1] != '\0' || str[i + 1] != '\0') {
				if (str[i + 1] == 'i' && str[i + 2] == 'e') {
					isvalid = 0;
				}
			}

		}

		if (str[i] == 'e' && i == 0) {

			if (str[i + 1] == 'i') {
				isvalid = 0;
			}


		}
		if (str[i] == 'e' && i != 0) {
			if (str[i - 1] != 'c' && str[i + 1] == 'i') {
				isvalid = 0;
			}

		}

		i++;
	}
	return isvalid;
}

void ReadScores() {
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

		int j = words.size();
		cout << j << endl;

		int total = 0;
		for (int i = 0; i < j; i++) {
			if (isvalid(words[i]) == 1) {
				total++;
			}
		}
		cout << (j - total) << endl;




	}

}

int main()
{
	ReadScores();

	/*char *string;
	string = (char*)malloc(100 * sizeof(char));

	printf("Please input a word\n");
	scanf("%s", string);

	int isvalid = 1;
	int i = 0;
	while (string[i] != '\0') {
	if (string[i] == 'c') {
	if (string[i + 1] != '\0' ||  string[i + 1] != '\0') {
	if (string[i + 1] == 'i' && string[i + 2] == 'e') {
	isvalid = 0;
	}
	}

	}

	if (string[i] == 'e' && i == 0) {

	if (string[i + 1] == 'i') {
	isvalid = 0;
	}


	}
	if (string[i] == 'e' && i != 0) {
	if (string[i - 1] != 'c' && string[i + 1] == 'i') {
	isvalid = 0;
	}

	}

	i++;
	}

	printf("%d\n", isvalid);
	*/
	return 0;





}

