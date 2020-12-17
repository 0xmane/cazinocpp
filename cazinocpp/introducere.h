#pragma once
#include <cstdlib>
#include <ctime>
#include "variabile.h"


void mesajIntrare() {

	std::cout << "\nNumele tau este: ";
	getline(std::cin, playerName);

	std::cout << "Alege un buget, " << playerName << ": ";
	std::cin >> suma;
}

void drawLine(int y, std::string simbol) {
	for (int i = 0; i < y; i++) {
		std::cout << simbol;
	}
}

void rules() {
	system("cls");
	drawLine(80, "*");
	std::cout << "\n\t\tREGULI JOC\n";
	std::cout << "\t 1. Alege un numar intre 1 si 3\n";
	std::cout << "\t 2. Daca castigi, primesti de 4 ori suma pariata\n";
	std::cout << "\t 3. Daca pierzi pariul, pierzi si suma pariata\n";
	drawLine(80, "*");
}