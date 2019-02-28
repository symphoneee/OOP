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

		if(p1Rank == p2Rank) {
			int p11Rank;
			int p22Rank;

			std::cout << "It's a tie. TIME FOR WAR!" << std::endl;
			--turns;
			--turns;
			++temp;
			++temp;

			std::cout << "Both players place one card down." << std::endl;
			std::cout << "NOW GO TO WAR!" << std::endl;
			std::cout << std::endl;
			
			std::cout << "P1 playing: ";
			p1.printCard(temp);
			p11Rank = p1.returnRank(temp);

			std::cout << " ~vs~ P2 playing: ";
			p2.printCard(temp);
			p22Rank = p2.returnRank(temp);
			std::cout << std::endl;

			if(p11Rank > p22Rank) {
			std::cout << "P1 wins this showdown!" << std::endl;
			p1Score+= 3;
			}
			else if(p22Rank > p11Rank) {
			std::cout << "P2 wins this showdown!" << std::endl;
			p2Score+=3;
			}
			std::cout << std::endl;
		}

		if(p1Rank > p2Rank) {
			std::cout << "P1 wins this round!" << std::endl;
			++p1Score;
		}
		else if(p2Rank > p1Rank) {
			std::cout << "P2 wins this round!" << std::endl;
			++p2Score;
		}
		
		std::cout << "P1's score is: " << p1Score << std::endl;
		std::cout << "P2's score is: " << p2Score << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		--turns;
		++temp;
	}
	if(p1Score > p2Score) {
		std::cout << "P1 WINS! CONGRATULATIONS!" << std::endl;
	}
	else
		std::cout << "P2 WINS! CONGRATULATIONS!" << std::endl;
}
