#include "deck.hpp"

#include <iostream>
#include <random>
#include <cstdlib>

Deck makeDeck() {
  Deck d {
    {Two, Spades},
    {Three, Spades},
    {Four, Spades},
    {Five, Spades},
    {Six, Spades},
    {Seven, Spades},
    {Eight, Spades},
    {Nine, Spades},
    {Ten, Spades},
    {Jack, Spades},
    {Queen, Spades},
    {King, Spades},
    {Ace, Spades},

    {Two, Clubs},
    {Three, Clubs},
    {Four, Clubs},
    {Five, Clubs},
    {Six, Clubs},
    {Seven, Clubs},
    {Eight, Clubs},
    {Nine, Clubs},
    {Ten, Clubs},
    {Jack, Clubs},
    {Queen, Clubs},
    {King, Clubs},
    {Ace, Clubs},

    {Two, Hearts},
    {Three, Hearts},
    {Four, Hearts},
    {Five, Hearts},
    {Six, Hearts},
    {Seven, Hearts},
    {Eight, Hearts},
    {Nine, Hearts},
    {Ten, Hearts},
    {Jack, Hearts},
    {Queen, Hearts},
    {King, Hearts},
    {Ace, Hearts},

    {Two, Diamonds},
    {Three, Diamonds},
    {Four, Diamonds},
    {Five, Diamonds},
    {Six, Diamonds},
    {Seven, Diamonds},
    {Eight, Diamonds},
    {Nine, Diamonds},
    {Ten, Diamonds},
    {Jack, Diamonds},
    {Queen, Diamonds},
    {King, Diamonds},
    {Ace, Diamonds},
  };
  return d;
}

void Deck::createDeck() {
	for(int s = Clubs; s <= Spades; ++s) {
		for(int r = Two; r <= Ace; ++r) {
			Card temp(static_cast<Rank>(r), static_cast<Suit>(s));
			deck.push_back(temp);
			}
		}
	}

void Deck::shuffleDeck() {
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(deck.begin(), deck.end(), g);
	}

void Deck::printDeck() {
	for(int i = 0; i < deck.size(); ++i) {
		std::cout << deck[i];
		std::cout << std::endl;
		}
	}

void Deck::printCard(int i) {
		std::cout << deck[i];
	}

Rank Deck::returnRank(int r){
	return deck[r].getRank();
}



