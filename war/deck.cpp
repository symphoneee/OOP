#include "deck.hpp"

#include <iostream>
#include <random>
#include <cstdlib>


void Deck::createDeck() {
	for(int s = Clubs; s <= Spades; ++s) {
		for(int r = Two; r <= Ace; ++r) {
			Card temp(static_cast<Rank>(r), static_cast<Suit>(s));
			deck.push_back(temp);
			}
		}
	}

void Deck::shuffleDeck() {
	std::minstd_rand randInt;
	std::shuffle(deck.begin(), deck.end(), randInt);
	std::cout << randInt << std::endl;
	}

	void Deck::checkRand() {
	srand(time(NULL));
    int randInt = rand() % 52 + 1; 
    std::cout << randInt << std::endl;
    int randInt2 = rand() % 52 + 1;
    std::cout << randInt2 << std::endl;

    std::mt19937 mt_rand(time(0));
 
    std::cout << mt_rand() << std::endl;
    std::cout << mt_rand() << std::endl;

	}

void Deck::printDeck() {
	for(int i = 0; i < deck.size(); ++i) {
		std::cout << deck[i];
		std::cout << std::endl;
		}
	}
	
	
