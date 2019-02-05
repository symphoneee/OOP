# WAR
Object Oriented Programming - Spring 2019

Implement the game of War.

> In this implementation of war I have tried to abstract the different classes as much as possible. There is a seperate class for each step of the process allowing easy fixes in certain classes instead of disrupting the whole system. 
> It begins with the Card class where a simple card is formed with a Rank and Suit. 
> It then moves to the Deck class where there are functions that use the Card class to form a Deck of cards, shuffle it, return the Rank of the card, and display the contents of the cards. 
> Then it moves to a player class which can call up the deck class and there are functions in the player class which allow the player to create a deck that they posses. 
> Then finally, the game class allows access to the player class so that in the game class a player can be created. 
> In main.cpp the only call is to one game class that is created and inside that class two players are created, dealt cards, and the cards are compared and a total of wins is kept for each player. 
> At the end of the simulation the programs alerts the user of which player has won.
