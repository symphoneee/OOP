#include "CARD.HPP"
#include "DECK.HPP"

#include<iostream>
#include <vector>

int main(){


Rank r1 = Ace;
Suit s1 = Clubs;
 
Rank r2 = Queen;
Suit s2 = Hearts;

Card c1(r1, s1);
Deck d1;

d1.createDeck();
d1.shuffleDeck();
d1.printSingle(52);
d1.printDeck();

/*
std::cout << c1.getRank() << std::endl;
std::cout << c1.getSuit() << std::endl;



Card c1(r1, s1);
Card c2(r2, s2);

std::cout <<  c1.getRank() << std::endl;
std::cout <<  c1.getSuit() << std::endl;

std::cout <<  c2.getRank() << std::endl;
std::cout <<  c2.getSuit() << std::endl;

Deck d1;

	 //d1.createDeck();
	 d1.shuffleDeck();
	std::cout << d1.printDeck() << std::endl;

*/

return 0;
};
