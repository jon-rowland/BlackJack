#include "deck.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));
  build_deck();
  printf("Standard deck\n");
  for (int i = DECK_SIZE - 1; i >= 0; i--) {
    printf("%5s of %2s\n", ranks[deck.cards[i].rank], suits[deck.cards[i].suit]);
  }

  fisher_yates_shuffle();

  printf("Shuffled Deck\n");
  for (int i = DECK_SIZE - 1; i >= 0; i--) {
    printf("%5s of %2s\n", ranks[deck.cards[i].rank], suits[deck.cards[i].suit]);
  }
  return 0;
}
