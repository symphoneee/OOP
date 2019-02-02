#pragma once

#include "card.hpp"
#include <vector>

struct Deck {
	std::vector<Card> deck;
	void createDeck();
	void shuffleDeck();
	void printDeck();
	void printCard(int);
	void getRank(int);
	int returnInt(Card);
	Rank returnRank(int);
	};


