#pragma once
#include "card.hpp"

#include <vector>


struct Player {
	Deck deck;
	void createDeck();
	void printDeck();
	void printCard(int);
	Rank returnRank(int);
};
