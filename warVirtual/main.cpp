#include "card.hpp"

#include <iostream>
#include <random>
#include <cassert>

int main(int argc, char* argv[]) 
{

  Deck d {
    new standCard(Ace, Spades),
    new standCard(Two, Spades),
    new standCard(Three, Spades),
    new standCard(Four, Spades),
    new standCard(Five, Spades),
    new standCard(Six, Spades),
    new standCard(Seven, Spades),
    new standCard(Eight, Spades),
    new standCard(Nine, Spades),
    new standCard(Ten, Spades),
    new standCard(Jack, Spades),
    new standCard(Queen, Spades),
    new standCard(King, Spades),

    new standCard(Ace, Clubs),
    new standCard(Two, Clubs),
    new standCard(Three, Clubs),
    new standCard(Four, Clubs),
    new standCard(Five, Clubs),
    new standCard(Six, Clubs),
    new standCard(Seven, Clubs),
    new standCard(Eight, Clubs),
    new standCard(Nine, Clubs),
    new standCard(Ten, Clubs),
    new standCard(Jack, Clubs),
    new standCard(Queen, Clubs),
    new standCard(King, Clubs),

    new standCard(Ace, Diamonds),
    new standCard(Two, Diamonds),
    new standCard(Three, Diamonds),
    new standCard(Four, Diamonds),
    new standCard(Five, Diamonds),
    new standCard(Six, Diamonds),
    new standCard(Seven, Diamonds),
    new standCard(Eight, Diamonds),
    new standCard(Nine, Diamonds),
    new standCard(Ten, Diamonds),
    new standCard(Jack, Diamonds),
    new standCard(Queen, Diamonds),
    new standCard(King, Diamonds),

    new standCard(Ace, Hearts),
    new standCard(Two, Hearts),
    new standCard(Three, Hearts),
    new standCard(Four, Hearts),
    new standCard(Five, Hearts),
    new standCard(Six, Hearts),
    new standCard(Seven, Hearts),
    new standCard(Eight, Hearts),
    new standCard(Nine, Hearts),
    new standCard(Ten, Hearts),
    new standCard(Jack, Hearts),
    new standCard(Queen, Hearts),
    new standCard(King, Hearts),

    new jokerCard(Black),
    new jokerCard(Red),
  };

  std::cout << d << '\n';

  standCard c1(Ace, Spades);
  standCard c2(Three, Clubs);
  standCard c3(Five, Hearts);

  assert(c1.getColor() == Black);
  assert(c2.getColor() == Black);
  assert(c3.getColor() == Red);


  return 0;
}
