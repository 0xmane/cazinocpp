#pragma once
#include <iostream>
#include <string>
#include "variabile.h"
#include "introducere.h"

void concluzieJoc()
{
	if (suma == 0)
	{
		std::cout << "Nu mai bani coie, mars la munca\n";
	}
	std::cout << "Mai vrei sa joci o data (y/n?)";
	std::cin >> alegere;
}

void plecare() {
	drawLine(80, "=");
	std::cout << "\nMerci ca mi-ai dat banii tai. Ai plecat acasa cu " << suma << " lei\n\n";
	drawLine(80, "=");
}
