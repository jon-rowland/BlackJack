#include "deck.h"
#include <stdio.h>
#include <stdlib.h>

/* All the ranks for every card in a deck */
char *ranks[] = { "", "Ace", "Two", "Three", "Four", "Five", "Six",
		  "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

/* All the suits for every card in a deck */
char *suits[] = { "Spades", "Clubs", "Hearts", "Diamonds" };

struct Deck deck;
