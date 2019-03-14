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

class vCard {
public:
    vCard(cardKind cKind) : kind(cKind) { }

    virtual void print() const = 0;
    virtual Color getColor() const = 0;

    cardKind getKind();

    bool isStand() const;
    bool isJoker() const;

private:
    cardKind kind;
};

class standCard : vCard {
public:
    standCard(Suit s, Rank r) : vCard(Standard), rank(r), suit(s) { }
	
	Rank getRank() const {return rank;}
	Suit getSuit() const {return suit;}

    void print(standCard) const override;
    Color getColor() const override;

private:
	Rank rank;
	Suit suit;
};


class jokerCard : vCard {
public:
    jokerCard(Color c) : vCard(Joker), color(c) { }
    
    Color getColor() const;
    void print() const;

private:
    Color color;

};







