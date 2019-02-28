#include "War.hpp"
#include "card.hpp"

#include <iostream>


int main(int argc, char* argv[]){
	Deck d {
    playCard{Ace, Spades},
    playCard{Two, Spades},
    playCard{Three, Spades},
    playCard{Four, Spades},
    playCard{Five, Spades},
    playCard{Six, Spades},
    playCard{Seven, Spades},
    playCard{Eight, Spades},
    playCard{Nine, Spades},
    playCard{Ten, Spades},
    playCard{Jack, Spades},
    playCard{Queen, Spades},
    playCard{King, Spades},

    playCard{Ace, Clubs},
    playCard{Two, Clubs},
    playCard{Three, Clubs},
    playCard{Four, Clubs},
    playCard{Five, Clubs},
    playCard{Six, Clubs},
    playCard{Seven, Clubs},
    playCard{Eight, Clubs},
    playCard{Nine, Clubs},
    playCard{Ten, Clubs},
    playCard{Jack, Clubs},
    playCard{Queen, Clubs},
    playCard{King, Clubs},

    playCard{Ace, Diamonds},
    playCard{Two, Diamonds},
    playCard{Three, Diamonds},
    playCard{Four, Diamonds},
    playCard{Five, Diamonds},
    playCard{Six, Diamonds},
    playCard{Seven, Diamonds},
    playCard{Eight, Diamonds},
    playCard{Nine, Diamonds},
    playCard{Ten, Diamonds},
    playCard{Jack, Diamonds},
    playCard{Queen, Diamonds},
    playCard{King, Diamonds},

    playCard{Ace, Hearts},
    playCard{Two, Hearts},
    playCard{Three, Hearts},
    playCard{Four, Hearts},
    playCard{Five, Hearts},
    playCard{Six, Hearts},
    playCard{Seven, Hearts},
    playCard{Eight, Hearts},
    playCard{Nine, Hearts},
    playCard{Ten, Hearts},
    playCard{Jack, Hearts},
    playCard{Queen, Hearts},
    playCard{King, Hearts},

    playCard{Black},
    playCard{Red}
  };

std::cout << d << std::endl;
//War war;
//war.Play();

return 0;
};
