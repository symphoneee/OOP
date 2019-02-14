#pragma once

#include<iostream>
#include<deque>

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
	Card(Rank rank, Suit suit) : data(static_cast<unsigned>(suit) << 4 | 
		static_cast<unsigned>(rank)) {}

	int data;

	Rank getRank () const { return static_cast<Rank>(data& 0xf);}
	Suit getSuit () const { return static_cast<Suit>(data >> 4);}

	int getInt(Card);

private:
	Rank r;
	Suit s;
};

std::ostream& operator<<(std::ostream& os, Card card);
std::ostream& operator<<(std::ostream& os, Rank rank);
std::ostream& operator<<(std::ostream& os, Suit suit);

bool operator==(Card a, Card b);

bool operator!=(Card a, Card b);

bool operator<(Card a, Card b);

bool operator>(Card a, Card b);

bool operator<=(Card a, Card b);

bool operator>=(Card a, Card b);

