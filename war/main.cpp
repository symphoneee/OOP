#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"

#include <iostream>

int main(){


Player p1;
Player p2;

p1.createDeck();
p1.printDeck();

std::cout << std::endl;
std::cout << std::endl;
p1.getRank(51);


return 0;
};
