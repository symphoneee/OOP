#pragma once

#include<iostream>
#include<deque>
#include<iosfwd>
#include<cassert>


enum Rank {
	Ace,
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
};

enum Suit {
	Spades,
	Clubs,
	Diamonds,
	Hearts,
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
	int data;

	standCard();
	standCard(Rank rank, Suit suit) : data(static_cast<unsigned>(suit) << 4 | 
		static_cast<unsigned>(rank)) {};

	Rank getRank () const { return static_cast<Rank>(data & 0xf); }
	Suit getSuit () const { return static_cast<Suit>(data >> 5); }


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

//struct playCard : std::variant<standCard, jokerCard> {};

struct Deck : std::deque<playCard> {
	using std::deque<playCard>::deque;
};


std::ostream& operator<<(std::ostream& os, standCard card);
std::ostream& operator<<(std::ostream& os, Rank rank);
std::ostream& operator<<(std::ostream& os, Suit suit);
std::ostream& operator<<(std::ostream& os, Color color);
std::ostream& operator<<(std::ostream& os, jokerCard joker);
std::ostream& operator<<(std::ostream& os, playCard play);
std::ostream& operator<<(std::ostream& os, Deck const& d);

bool operator==(standCard a, standCard b);

bool operator!=(standCard a, standCard b);

bool operator<(standCard a, standCard b);

bool operator>(standCard a, standCard b);

bool operator<=(standCard a, standCard b);

bool operator>=(standCard a, standCard b);

