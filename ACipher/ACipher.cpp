// ACipher.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main()
{

	char sec[100];
	char phrase[100];
	char encoded[100];


	printf("%s\n", "Enter secretkey");
	scanf("%s", sec);

	printf("%s\n", "Enter phrase to be encoded");
	scanf("%s", phrase);

	int phraselen = 0;
	int seclen = 0;

	int j = 0;
	while (phrase[j] != '\0') { //get phrase length
		phraselen++;
		j++;
	}

	j = 0;

	while (sec[j] != '\0') { //get secret length
		seclen++;
		j++;
	}
	j = 0;
	int k = 0;

	if (phraselen > seclen) {	//if the phrase length is more than the secret, copy the secret until it's the same length
		for (int m = seclen; m < phraselen; m++) {
			sec[seclen + j] = sec[k];
			j++;
			k++;
		}

		seclen = phraselen;
		sec[seclen] = '\0';
	}




	int i;

	for (i = 0; i < phraselen; i++) {
		int temp = phrase[i] + (sec[i] - 'a');

		if (temp > 122) {
			temp = temp - 26;
		}
		encoded[i] = temp;

	}
	encoded[i] = '\0';
	printf("%s\n", encoded);

	return 0;
}

