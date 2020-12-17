#pragma once
#include "variabile.h"
#include <iostream>

void valoarePariu1() {

	do
	{
		std::cout << "\n" << playerName << ", alege suma pe care vrei sa o pariezi: ";
		std::cin >> valoarePariu;
		if (valoarePariu > suma)
		{
			std::cout << "Ai pariat mai multi bani decat ai depus.\n";
		}
	} while (valoarePariu > suma);
}