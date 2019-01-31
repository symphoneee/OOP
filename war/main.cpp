#include "CARD.HPP"
#include "DECK.HPP"

#include<iostream>

int main(){

Deck d1;

d1.createDeck();
d1.printDeck();

std::cout << std::endl;

d1.shuffleDeck();
d1.printDeck();


return 0;
};
