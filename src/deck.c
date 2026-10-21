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
 * @return void
 */
void build_deck(void)
{
  int count = 0;
  int rank = 14;
  int suit = 4;
  
  for (int i = 0; i < DECK_AMOUNT; i++) {
    for (int j = 0; j < suit; j++) {
      for (int k = 1; k < rank; k++) {
	deck.cards[count].suit = j;
	deck.cards[count].rank = k;
	count++;
      }
    }
  }
  deck.top = DECK_SIZE - 1;
}

/**
 * @brief  generates a random integer from 0 <= num <= range
 * @param  range is the max the random number can be [0, range]
 * @return a single random integer between 0 and range
 */
static int random_num(int range)
{
  return rand() % (range + 1);
}

/**
 * @brief  swaps the index value at a to a different index b
 * @param  a is the orginal index value
 * @param  b is the random index value that is swapping
 * @return void
 */
static void swap_index(int a, int b)
{
  struct Card temp;
  temp = deck.cards[a];
  deck.cards[a] = deck.cards[b];
  deck.cards[b] = temp;
}

/**
 * @brief  builds Fisher-Yates shuffle
 * @return void
 */
void fisher_yates_shuffle(void)
{
  for (int i = DECK_SIZE - 1; i >= 0; i--) {
    swap_index(i, random_num(i));
  }
}
/**
* @brief  checks to see if the deck is getting low if there
* 	  are less than 10 cards in the deck, shuffle the deck
* @return void
*/
void check_deck(void)
{
  if (deck.top <= 10) {
    fisher_yates_shuffle();
    deck.top = DECK_SIZE - 1;
  }
}
