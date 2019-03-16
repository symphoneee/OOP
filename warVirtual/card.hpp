#pragma once

#include <deque>
#include <iosfwd>


enum Suit {
	Spades,
	Clubs,
	Diamonds,
	Hearts,
	};

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

enum Color {
	Black,
	Red,
	};

enum cardKind {
	Standard, 
	Joker,
	};

struct vCard {
	virtual void print(std::ostream& os) const = 0;
	virtual Color getColor() const = 0;
	};

struct Deck : std::deque<vCard*> {
	using std::deque<vCard*>::deque;
	};

struct standCard : vCard {
	standCard(Rank r, Suit s) : rank(r), suit(s) { }

	void print(std::ostream& os) const override;

	Color getColor() const override {
    	return static_cast<Color>(suit > Diamonds);
  		}

  	Rank rank;
  	Suit suit;
	};

struct jokerCard : vCard {
	jokerCard(Color c) : color(c) { }
  
	void print(std::ostream& os) const override;
  
	Color getColor() const override {return color;}

	Color color;
	};

std::ostream& operator<<(std::ostream& os, Suit s);
std::ostream& operator<<(std::ostream& os, Rank r);
std::ostream& operator<<(std::ostream& os, Color c);
std::ostream& operator<<(std::ostream& os, vCard const& c);
std::ostream& operator<<(std::ostream& os, Deck const& d);
std::ostream& operator<<(std::ostream& os, standCard const& c);
std::ostream& operator<<(std::ostream& os, jokerCard const& c);


