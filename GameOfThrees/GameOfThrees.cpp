// GameOfThrees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>

int main()
{
	std::string str;
    std::cout << "Enter starting number\n"; 
	std::getline(std::cin, str);
	int startnum = stoi(str);


	int x = startnum;

	while (x != 1) {

		if (x % 3 == 0) {
			std::cout << x << " 0" << std::endl;
			x = x / 3;
			

		}
		else if ((x + 1) % 3 == 0) {
			std::cout << x << " 1" << std::endl;
			x++;
			x = x / 3;
			


		}
		else {
			std::cout << x << " -1" << std::endl;
			x--;
			x = x / 3;
		
		}
	}

	std::cout << x << std::endl;







}

