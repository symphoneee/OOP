#include "card.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& os, Rank rank) {
  switch (rank) {

    case Two: os << '2';
      break;
    case Three: os << '3';
      break;
    case Four:  os << '4';
      break;
    case Five:  os << '5';
      break;
    case Six: os << '6';
      break;
    case Seven: os << '7';
      break;
    case Eight: os << '8';
      break;
    case Nine:  os << '9';
      break;
    case Ten: os << 'T';
      break;
    case Jack:  os << 'J';
      break;
    case Queen: os << 'Q';
      break;
    case King:  os << 'K';
      break;
    case Ace: os << 'A';
      break;
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, Suit suit) {
  switch (suit) {
    case Hearts:  os << 'H';
      break;
    case Diamonds:  os << 'D';
      break;
    case Clubs: os << 'C';
      break;
    case Spades:  os << 'S';
      break;
  }
  return os;
}

std::ostream& operator<<(std::ostream& os, Color color) {
	return os << (color == Black ? "B" : "R");
}

std::ostream& operator<<(std::ostream& os, playCard play) {
	if(play.isStand())
		return os << play.getStand();
	else
		return os << play.getJoker();
}

std::ostream& operator<<(std::ostream& os, standCard card) {
  return os << card.getRank() << card.getSuit();
}

bool operator==(standCard a, standCard b) {
    return a.getRank() == b.getRank() && a.getSuit() == b.getSuit();
}

bool operator!=(standCard a, standCard b) {
    return!(a == b);
}

bool operator<(standCard a, standCard b) {
    if(a.getSuit() < b.getSuit())
        return true;
    if(b.getSuit() < a.getSuit())
        return false;
    return a.getRank() < b.getRank();
}

bool operator>(standCard a, standCard b) {
    return (b < a);
}

bool operator<=(standCard a, standCard b) {
    return !(b < a);
}

bool operator >=(standCard a, standCard b) {
    return !(a < b);
}

