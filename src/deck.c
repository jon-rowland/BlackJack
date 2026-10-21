#include "deck.h"
#include <stdio.h>
#include <stdlib.h>

/* All the ranks for every card in a deck */
char *ranks[] = { "", "Ace", "Two", "Three", "Four", "Five", "Six",
		  "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

/* All the suits for every card in a deck */
char *suits[] = { "Spades", "Clubs", "Hearts", "Diamonds" };

struct Deck deck;

/**
 * @brief builds the 52 card deck
 */
void build_deck(void)
{
  int count = 0;

  int rank = 14;
  int suit = 4;

  for (int i = 0; i < suit; i++) {
    for (int j = 1; j < rank; j++) {
      deck.cards[count].suit = i;
      deck.cards[count].rank = j;
      count++
    }
  }
  deck.top = DECK_SIZE - 1;
}

int random_num(int range)
{
  return rand() % (range + 1)
}

void swap_index(int a, int b)
{
  struct Card temp;
  temp = deck.card[a];
  deck.cards[a] = deck.cards[b];
  deck.cards[b] = temp;
}

void knut(void)
{
  for (int i = DECK_SIZE - 1; i >= 0; i--) {
    swap_index(i, random_num(i));
  }
}

void check_deck(void)
{
  if (deck.top <= 10) {
    knuth();
    deck.top = DECK.SIZE - 1;
  }
}
