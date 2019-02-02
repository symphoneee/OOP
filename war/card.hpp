#pragma once

#include<iostream>

enum Rank {
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Ace,
};

enum Suit {
	Clubs,
	Diamonds,
	Hearts,
	Spades,
};

class Card {
public:
	Card();
	Card(Rank rank, Suit suit) : r(rank), s(suit) {}

	Rank getRank () const { return r;}
	Suit getSuit () const { return s;}

	int getInt(Card);

private:
	Rank r;
	Suit s;
};

std::ostream& operator<<(std::ostream& os, Card card);
std::ostream& operator<<(std::ostream& os, Rank rank);
std::ostream& operator<<(std::ostream& os, Suit suit);

