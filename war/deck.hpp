#pragma once

#include "card.hpp"
#include <vector>

struct Deck {
	std::vector<Card> deck;
	void createDeck();
	void shuffleDeck();
	void printDeck();
	};


