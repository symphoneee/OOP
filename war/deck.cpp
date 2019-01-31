#include "deck.hpp"

#include <iostream>
#include <random>
#include <random>

void Deck::createDeck() {
	for(int s = Clubs; s <= Spades; ++s) {
		for(int r = Two; r <= Ace; ++r) {
			Card temp(static_cast<Rank>(r), static_cast<Suit>(s));
			deck.push_back(temp);
			}
		}
	}

void Deck::shuffleDeck() {
	std::minstd_rand prng;
	std::shuffle(deck.begin(), deck.end(), prng);
	}

void Deck::printDeck() {
	for(int i = 0; i < deck.size(); ++i) {
		std::cout << deck[i];
		std::cout << std::endl;
		}
	std::cout << std::endl;
	}
	
	
