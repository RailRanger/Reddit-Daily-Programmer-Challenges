// Rovarspraket.cpp 
#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>
#include <cctype>
#include <clocale>



bool isconsonants(wchar_t c) {
	std::string notvowels = "bcdfghjklmnpqrstvxyz";


	for (int i = 0; i < notvowels.size(); i++) {
		if (c == notvowels.at(i)) {
			return true;
		}
	}

	return false;
}


int main()
{

	std::cout << "Enter input to be translated to Robber's language\n";
	std::string str;
	std::getline(std::cin, str);
	std::string temp = "";
	

	for (size_t i = 0; i < str.size(); i++) {
		wchar_t cati = std::tolower(str.at(i));
		if (isconsonants(cati)) {
			temp = str.at(i);
			str.erase(i, 1);
			str.insert(i, (temp + "o" + temp));
			i = i + 2;
		}
		
		
	}
	std::cout << str << std::endl;

}