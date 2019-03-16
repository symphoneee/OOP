#include "card.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& os, Suit suit) {
  	switch (suit) {
  		case Clubs: 
  			return os << "C";
  		case Spades: 
  			return os << "S";
  		case Hearts: 
  			return os << "H";
  		case Diamonds: 
  			return os << "D";
  	}
}

std::ostream& operator<<(std::ostream& os, Rank rank) {
  switch (rank) {
  	case Ace: 
  		return os << "A";
  	case Two: 
  		return os << "2";
  	case Three: 
  		return os << "3";
  	case Four: 
  		return os << "4";
  	case Five: 
  		return os << "5";
  	case Six: 
  		return os << "6";
  	case Seven: 
  		return os << "7";
  	case Eight: 
  		return os << "8";
  	case Nine: 
  		return os << "9";
  	case Ten: 
  		return os << "T";
  	case Jack: 
  		return os << "J";
  	case Queen: 
  		return os << "Q";
  	case King: 
  		return os << "K";
  	}
}

void standCard::print(std::ostream& os) const {
	os << *this;
	}

void  jokerCard::print(std::ostream& os) const {
	os << *this;
	}

std::ostream& operator<<(std::ostream& os, vCard const& card) {
	card.print(os);
	return os;
	}

std::ostream& operator<<(std::ostream& os, Color card) { 
	return os << (card == Black ? "Black" : "Red");
	}

std::ostream& operator<<(std::ostream& os, standCard const& card) {
	return os << card.rank << card.suit;
	}

std::ostream& operator<<(std::ostream& os, jokerCard const& card) {
	return os << card.color;
	}

std::ostream& operator<<(std::ostream& os, Deck const& deck) {
	for (vCard const* card : deck) {
  		os << *card << '\n';
  }

  return os;
}
