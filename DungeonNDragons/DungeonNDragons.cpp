// DnD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#pragma warning(disable:4996)


using namespace std;

int main()
{

	char *str = (char*)malloc(100 * sizeof(char));
	char *amt = (char*)malloc(100 * sizeof(char));
	char *ssides = (char*)malloc(100 * sizeof(char));
	int rollamt;
	int sides;

	printf("Enter NdM (Number of times to roll and how many sides the dice are, e.g 3d6) \n");
	scanf_s("%s", str, 100);


	int i = 0;
	while (str[i] != 'd') {
		amt[i] = str[i];
		i++;
	}
	amt[i] = '\0';
	rollamt = stoi(amt);

	i++;
	int j = 0;

	while (str[i] != '\0') {
		ssides[j] = str[i];
		i++;
		j++;
	}
	ssides[j] = '\0';

	sides = stoi(ssides);

	int k = 0;
	int sum = 0;
	while (k < rollamt) {
		std::srand(time(0));
		sum += (std::rand() % sides + 1);
		k++;
	}


	cout << sum << endl;



	return 0;
}

