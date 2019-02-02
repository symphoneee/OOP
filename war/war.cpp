#include "war.hpp"
#include "player.hpp"
#include "deck.hpp"

#include <iostream>

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

	int p1Rank;
	int p2Rank;

	p1.createDeck();
	p2.createDeck();

	while(turns > 0){
		std::cout << "P1 playing: ";
		p1.printCard(temp);

		std::cout << " ~vs~ P2 playing: ";
		p2.printCard(temp);
		std::cout << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

		p1Rank = p1.returnRank(temp);
		p2Rank = p2.returnRank(temp);

		if(p1Rank > p2Rank) {
			std::cout << "P1 wins this round!" << std::endl;
		}
		else if(p2Rank > p1Rank) {
			std::cout << "P2 wins this round!" << std::endl;
		}

		std::cout << std::endl;
		std::cout << std::endl;

		--turns;
		++temp;
	}

}

		/*
		******Legend******
		p2.getRank(temp);
		p2Rank = p2.returnRank(temp);
		p2.score = 6;
		std::cout << p2.score << std::endl;
		std::cout << p1Rank << std::endl;
		*/