// TalkingAlarm.cpp : Defines the entry point for the console application.
//

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;



int main()
{
	char *str = (char*)malloc(100 * sizeof(char));
	char *hours = (char*)malloc(100 * sizeof(char));
	char *minutes = (char*)malloc(100 * sizeof(char));
	char *ampm = (char*)malloc(100 * sizeof(char));
	char *minutesprint = (char*)malloc(100 * sizeof(char));
    char **hourtimes = (char**)malloc(100 * sizeof(char*));

	for (int i = 0; i < 100; i++) {
		hourtimes[i] = (char*)malloc((100 * sizeof(char)));
	}


	char **ties = (char**)malloc(100 * sizeof(char*));
	for (int i = 0; i < 100; i++) {
		ties[i] = (char*)malloc((100 * sizeof(char)));
	}
	
	strcpy(ampm, "am");
	strcpy(hourtimes[0], "twelve");
	strcpy((hourtimes[1]), "one");
	strcpy((hourtimes[2]), "two");
	strcpy((hourtimes[3]), "three");
	strcpy((hourtimes[4]), "four");
	strcpy((hourtimes[5]), "five");
	strcpy((hourtimes[6]), "six");
	strcpy((hourtimes[7]), "seven");
	strcpy((hourtimes[8]), "eight");
	strcpy((hourtimes[9]), "nine");
	strcpy((hourtimes[10]), "ten");
	strcpy((hourtimes[11]), "eleven");
	strcpy((hourtimes[12]), "twelve");
	strcpy((hourtimes[13]), "thirteen");


	strcpy(ties[2], "twenty");
	strcpy(ties[3], "thirty");
	strcpy(ties[4], "fourty");
	strcpy(ties[5], "fifty");
	strcpy(ties[6], "sixty");

		
	


	printf("Enter a time, e.g 12:30\n");
	scanf("%s", str);
	int hour = 0;
	int minute = 0;
	
	int i = 0;
	while (str[i] != ':') {
		hours[i] = str[i];
		i++;
	}
	i++;
	hours[i] = '\0';
	hour = stoi(hours);

	int j = 0;
	while (str[i] != '\0') {
		minutes[j] = str[i];
		i++;
		j++;
	}

	minutes[j] = '\0';
	minute = stoi(minutes);
	

	

	if (hour >= 12) {
		hour = hour - 12;
		strcpy(ampm, "pm");
	}
	

	

	if (minute <10) {
		int k = 0;
		
		minutesprint[0] = 'o';
		minutesprint[1] = 'h';
		minutesprint[2] = ' ';

		while (hourtimes[minute][k] != '\0') {
			minutesprint[k + 3] = hourtimes[minute][k];
			k++;
		}
		minutesprint[k + 3] = '\0';
	}



	if (minute <14 && minute > 10) {
		int k = 0;

		
		while (hourtimes[minute][k] != '\0') {
			minutesprint[k] = hourtimes[minute][k];
			k++;
		}
		minutesprint[k] = '\0';
	}



	if (minute > 13 && minute < 20) {
		int k = 0;
		
		while (hourtimes[minute - 10][k] != '\0') {
			minutesprint[k] = hourtimes[minute - 10][k];
			k++;
		}
		if (minute == 15) {
			minutesprint[k - 2] = 'f';
			minutesprint[k - 1] = 't';
			minutesprint[k] = 'e';
			minutesprint[k+1] = 'e';
			minutesprint[k+2] = 'n';
			minutesprint[k + 3] = '\0';
		}
		else {
			minutesprint[k] = 't';
			minutesprint[k + 1] = 'e';
			minutesprint[k + 2] = 'e';
			minutesprint[k + 3] = 'n';
			minutesprint[k + 4] = '\0';
		}

		


		
	}



	if (minute > 19 && minute<30) {

		int k = 0;
		int temp = minutes[1] - '0';
		while (ties[2][k] != '\0') {
			minutesprint[k] = ties[2][k];
			k++;
		}


		if (minutes[1] != '0') {

			int m = 0;
			minutesprint[k] = ' ';
			
			while (hourtimes[temp][m] != '\0') {
				minutesprint[k + 1] = hourtimes[temp][m];
				k++;
				m++;
			}
			minutesprint[k + 1] = '\0';
			minutesprint[k + 2] = '\0';

		}
		else {
			minutesprint[k] = '\0';
		}


	}


	if (minute > 29 && minute<40) {

		int k = 0;
		int temp = minutes[1] - '0';
		while (ties[3][k] != '\0') {
			minutesprint[k] = ties[3][k];
			k++;
		}


		if (minutes[1] != '0') {

			int m = 0;
			minutesprint[k] = ' ';

			while (hourtimes[temp][m] != '\0') {
				minutesprint[k + 1] = hourtimes[temp][m];
				k++;
				m++;
			}
			minutesprint[k + 1] = '\0';
			minutesprint[k + 2] = '\0';

		}
		else {
			minutesprint[k] = '\0';
		}


	}


	if (minute > 39 && minute<50) {

		int k = 0;
		int temp = minutes[1] - '0';
		while (ties[4][k] != '\0') {
			minutesprint[k] = ties[4][k];
			k++;
		}


		if (minutes[1] != '0') {

			int m = 0;
			minutesprint[k] = ' ';

			while (hourtimes[temp][m] != '\0') {
				minutesprint[k + 1] = hourtimes[temp][m];
				k++;
				m++;
			}
			minutesprint[k + 1] = '\0';
			minutesprint[k + 2] = '\0';

		}
		else {
			minutesprint[k] = '\0';
		}


	}


	if (minute > 49 && minute<60) {

		int k = 0;
		int temp = minutes[1] - '0';
		while (ties[5][k] != '\0') {
			minutesprint[k] = ties[5][k];
			k++;
		}


		if (minutes[1] != '0') {

			int m = 0;
			minutesprint[k] = ' ';

			while (hourtimes[temp][m] != '\0') {
				minutesprint[k + 1] = hourtimes[temp][m];
				k++;
				m++;
			}
			minutesprint[k + 1] = '\0';
			minutesprint[k + 2] = '\0';

		}
		else {
			minutesprint[k] = '\0';
		}


	
	}

	if (minutes[0]=='0' && minutes[1]=='0') {
		strcpy(minutesprint, "");
	}



	printf("It's %s %s %s\n", hourtimes[hour], minutesprint, ampm);
	
	

;    return 0;
}

