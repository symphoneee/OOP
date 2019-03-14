#include "Card.hpp"

#include <iostream>
#include <string>


void standCard::print(standCard c) const {
	std::string card;
	char Rank = c.getRank();
	char Suit = c.getSuit();

switch (Suit) {
		case Clubs: card = "C"; 
		break;
		case Diamonds: card = "D"; 
		break;
		case Hearts: card = "H"; 
		break;
		case Spades: card = "S"; 
		break;
	}

switch (Rank) {
		case Two: card = "2"; 
		break;
		case Three: card = "3"; 
		break;
		case Four: card = "4"; 
		break;
		case Five: card = "5"; 
		break;
		case Six: card = "6"; 
		break;
		case Seven: card = "7"; 
		break;
		case Eight: card = "8"; 
		break;
		case Nine: card = "9"; 
		break;
		case Ten: card = "10"; 
		break;
		case Jack: card = "J"; 
		break;
		case Queen: card = "Q"; 
		break;
		case King: card = "K"; 
		break;
		case Ace: card = "A"; 
		break;
	}

	std::cout << "The card is: " << card << std::endl;

}

Color standCard::getColor(standCard c) const {
	std::string color;
	char color = c.getColor();


switch (Suit) {
		case Clubs: card = "C"; 
		break;
		case Diamonds: card = "D"; 
		break;
		case Hearts: card = "H"; 
		break;
		case Spades: card = "S"; 
		break;
	}

	std::cout << "The color is: " << color << std::endl;

}

Color jokerCard::getColor() const {
	return color;
}

void jokerCard::print() const {
	std::string jColor;
	char color = c.getColor();


switch (Suit) {
		case Clubs: card = "Black"; 
		break;
		case Diamonds: card = "Red"; 
		break;
		case Hearts: card = "Red"; 
		break;
		case Spades: card = "Black"; 
		break;
	}

	std::cout << "The color is: " << jColor << std::endl;
	

}


bool Card::isStand() const {
	if (kind == Standard) {
		return true;
	} 
	
	else {
		return false;
	}
}

bool Card::isJoker() const {
	if (kind == Joker) {
		return true;
	} 
	
	else {
		return false;
	}
}