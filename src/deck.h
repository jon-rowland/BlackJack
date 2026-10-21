#ifndef DECK_H_
#define DECK_H_

/* The amount of decks */
#define DECK_AMOUNT 1

/*
 * The amount of cards in a deck
 * multipled by the amount of decks
*/
#define DECK_SIZE (52 * DECK_AMOUNT)

extern char *ranks[];
extern char *suits[];

struct Card
{
  int rank;
  int suit;
};

struct Deck
{
  struct Card cards[DECK_SIZE];
  int top;
};

extern struct Deck deck;

void build_deck(void);
void fisher_yates_shuffle(void);
void check_deck(void);

#endif
