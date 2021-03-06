// Defusal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;


enum Wires { WHITE, RED, GREEN, BLACK, ORANGE, PURPLE };


Wires parse_wire(const std::string& wire)
{
	if (wire == "white")
		return WHITE;
	if (wire == "red")
		return RED;
	if (wire == "black")
		return BLACK;
	if (wire == "orange")
		return ORANGE;
	if (wire == "green")
		return GREEN;
	return PURPLE;
}


int main()
{
	bool activated = false;
	//string input[4] = { "white", "red", "green", "white" };
	string input[4] = { "white" , "orange", "green", "white" };
	for (int i = 0; i < input->size() - 1; i++) {
		Wires current = parse_wire(input[i]);
		Wires next = parse_wire(input[i + 1]);





		switch (current) {
		case WHITE:
			if (next == BLACK || next == WHITE) {
				activated = true;
			} break;


		case RED:
			if (next != GREEN) {
				activated = true;

			} break;

		case GREEN:
			if (!(next == ORANGE || next == WHITE)) {
				cout << next << endl;
				activated = true;

			} break;

		case BLACK:
			if (next == WHITE || next == GREEN || next == ORANGE) {
				activated = true;

			} break;

		case ORANGE:
			if (!(next == RED || next == BLACK)) {
				activated = true;

			} break;

		case PURPLE:
			if (next == PURPLE || next == GREEN || next == ORANGE || next == WHITE) {
				activated = true;

			} break;


		}

		if (activated == true) {
			cout << "Boom" << endl;
			return 0;
		}

	}


	cout << "Bomb defused" << endl;
	return 0;
}

