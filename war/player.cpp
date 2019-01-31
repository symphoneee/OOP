#include "player.hpp"

#include <iostream>

void Player::createDeck() {
	Deck d;
	d.createDeck();
	d.shuffleDeck();
	deck = d;
	}

	void Player::printDeck() {
		deck.printDeck();
	}


