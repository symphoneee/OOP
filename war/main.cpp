#include "CARD.HPP"
#include "DECK.HPP"

#include<iostream>

int main(){

Deck d1;
Deck d2;

d1.createDeck();
d1.shuffleDeck();
d2.createDeck();
d2.shuffleDeck();

d1.printDeck();
d2.printDeck();



return 0;
};
