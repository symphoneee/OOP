#pragma once

#include "card.hpp"
#include <vector>

struct Deck {
	std::vector<Card> deck;
	void createDeck();
	Deck makeDeck();
	void shuffleDeck();
	void printDeck();
	void printCard(int);
	Rank returnRank(int);
	};


