#include <iostream>
#include <string>
#include "introducere.h"
#include "valoarePariu.h"
#include "zar.h"
#include "finalJoc.h"

int main() {
		rules();
		mesajIntrare();
	do{
		valoarePariu1();
		aruncareZaR(3);
		concluzieJoc();
	} while (alegere == "Y" || alegere == "y");
		plecare();
}