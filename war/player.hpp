#pragma once

#include "deck.hpp"

#include <vector>

struct Player {
	Deck deck;
	int score;
	int wins;

	void createDeck();
	void printDeck();
	void printCard(int);
	void getRank(int);
};