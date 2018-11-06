// WordFunnel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;


bool funnel(string word1, string word2) {
	string *arr = new string[word1.size()];

	for (int i = 0; i < word1.size(); i++) {
		string temp = word1;
		temp.erase(temp.begin() + i);
		arr[i] = temp;

	}



	for (int i = 0; i < word1.size(); i++) {
		if (!arr[i].compare(word2)) {
			return true;
			break;
		}
	}
	return false;
}


int main() {
	string word1, word2;
	cout << "Enter first word" << endl;
	cin >> word1;
	cout << "Enter second word" << endl;
	cin >> word2;

	cout << funnel(word1, word2) << endl;



	return 0;
}




