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
	Card(Rank rank, Suit suit) : r(rank), s(suit) {}

	/*data(static_cast<unsigned>(suit) << 4 | 
		static_cast<unsigned>(rank)) {} */

	int data;

	Rank getRank () const { return r; }
	Suit getSuit () const { return s; }

	int getInt(Card);

private:
	Rank r;
	Suit s;
};

/*struct Deck : std::deque<Card> {
	using std::deque<Card>::deque;
};
*/

std::ostream& operator<<(std::ostream& os, Card card);
std::ostream& operator<<(std::ostream& os, Rank rank);
std::ostream& operator<<(std::ostream& os, Suit suit);
//std::ostream& operator<<(std::ostream& os, Deck const& d);

bool operator==(Card a, Card b);

bool operator!=(Card a, Card b);

bool operator<(Card a, Card b);

bool operator>(Card a, Card b);

bool operator<=(Card a, Card b);

bool operator>=(Card a, Card b);

