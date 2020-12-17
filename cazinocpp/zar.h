#pragma once
#include <ctime>
#include <cstdlib>

void aruncareZaR(int range) {
	do
	{
		std::cout << playerName << ", acum ghiceste un numar intre 1 si 3: ";
		std::cin >> numarGhicit;
		if (numarGhicit <= 0 || numarGhicit > 3)
		{
			std::cout << "Nu ai ales numarul corect. Rescrie-l: \n";
		}
	} while (numarGhicit <= 0 || numarGhicit > 3);
	srand((unsigned int)time(NULL)); // Evita repetarea aceleasi valori
	int valoareZar = rand() % range + 1;

	if (valoareZar == numarGhicit)
	{
		std::cout << "Felicitari, ai nimerit.\n";
		suma = suma + valoarePariu * 4;
	}
	else
	{
		std::cout << "Ti-ai pierdut banii de tigari! Ai pierdut " << valoarePariu << "\n";
		suma = suma - valoarePariu;
	}
	std::cout << "Numarul castigator era: " << valoareZar << "\n";
	std::cout << playerName << ", mai ai in cont: " << suma << "\n";
}