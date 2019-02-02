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

std::ostream& operator<<(std::ostream& os, Card card) {
  return os << card.getRank() << card.getSuit();
}

int Card::getInt(Card c) {
  switch(c.getRank()) {
    case Two: 
      return 2;
    case Three: 
      return 3;
    case Four: 
      return 4;
    case Five: 
      return 5;
    case Six: 
      return 6;
    case Seven: 
      return 7;
    case Eight: 
      return 8;
    case Nine: 
      return 9;
    case Ten: 
      return 10;
    case Jack: 
      return 10;
    case Queen: 
      return 10;
    case King: 
      return 10;
    case Ace: 
      return 10;    
  }
}
