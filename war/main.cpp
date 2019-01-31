#include "CARD.HPP"
#include "DECK.HPP"

#include<iostream>
#include <vector>

int main(){


Rank r1 = Ace;
Suit s1 = Clubs;

Card c1(r1, s1);

Deck d1;

d1.createDeck();
d1.shuffleDeck();
d1.printDeck();

return 0;
};
