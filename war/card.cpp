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

int Card::getNumber() {
  switch(getRank()){
      case 0: return 2;
      case 1: return 3;
      case 2: return 4;
      case 3: return 5;
      case 4: return 6;
      case 5: return 7;
      case 6: return 8;
      case 7: return 9;
      case 8: return 10;
      case 9: return 10;
      case 10: return 10;
      case 11: return 10;
      case 12: return 10;    
  }
}