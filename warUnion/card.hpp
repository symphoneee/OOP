#pragma once

#include<iostream>
#include<deque>
#include<iosfwd>
#include<cassert>

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

enum Color {
	Black,
	Red,
};

enum cardKind {
	Standard,
	Joker,
};


class standCard {
public:
	standCard();
	standCard(Rank rank, Suit suit) : r(rank), s(suit) {}

	/*data(static_cast<unsigned>(suit) << 4 | 
		static_cast<unsigned>(rank)) {} */

	int data;

	Rank getRank () const { return r; }
	Suit getSuit () const { return s; }

	int getInt(standCard);

private:
	Rank r;
	Suit s;
};

class jokerCard {
public:
	jokerCard(Color color) : c(color) {}

	Color getColor() const { return c; }

private:
	Color c;
};

union cardInfo {
	cardInfo(Rank r, Suit s) : sCard(r, s) {}
	cardInfo(Color c) : jCard(c) {}

	standCard sCard;
	jokerCard jCard;
};

class playCard {
public:
	playCard(Rank r, Suit s) : tag(Standard), data(r, s) {}
	playCard(Color c) : tag(Joker), data(c) {}

	bool isStand() const { return tag == Standard;}
	bool isJoker() const { return tag == Joker;}

	standCard getStand() const {
		assert(isStand());
		return data.sCard;
	}

	jokerCard getJoker() const {
		assert(isJoker());
		return data.jCard;
	}

	Rank getRank() const {
		assert(isStand());
		return data.sCard.getRank();
	}

	Color getColor() const {
		assert(isJoker());
		return data.jCard.getColor();
	}

private:
	cardKind tag;
	cardInfo data;
};

/*struct Deck : std::deque<Card> {
	using std::deque<Card>::deque;
};
*/

std::ostream& operator<<(std::ostream& os, standCard card);
std::ostream& operator<<(std::ostream& os, Rank rank);
std::ostream& operator<<(std::ostream& os, Suit suit);
std::ostream& operator<<(std::ostream& os, Color color);
std::ostream& operator<<(std::ostream& os, jokerCard joker);
std::ostream& operator<<(std::ostream& os, playCard play);
//std::ostream& operator<<(std::ostream& os, Deck const& d);

bool operator==(standCard a, standCard b);

bool operator!=(standCard a, standCard b);

bool operator<(standCard a, standCard b);

bool operator>(standCard a, standCard b);

bool operator<=(standCard a, standCard b);

bool operator>=(standCard a, standCard b);

