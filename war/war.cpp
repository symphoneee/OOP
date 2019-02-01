#include "war.hpp"
#include "player.hpp"
#include "deck.hpp"

#include <iostream>
#include <string>

void War::Play(){

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "                     WELCOME TO WAR                         " << std::endl;
	std::cout << "````````````````````````````````````````````````````````````" << std::endl;
	std::cout << "                  Press Enter to Begin!                     " << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cin.clear();
	std::cin.ignore();

	int turns = 52;
	int temp = 0;
	int p1Score = 0;
	int p2Score = 0;

	Player p1;
	Player p2;

	p1.createDeck();
	p2.createDeck();

	while(turns > 0){
		std::cout << "P1 playing: ";
		p2.printCard(temp);

		std::cout << " ~vs~ P2 playing: ";
		p2.printCard(temp);

		std::cout << std::endl;

		--turns;
		++temp;
	}

}