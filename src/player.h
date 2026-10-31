#ifndef PLAYER_H_
#define PLAYER_H_

struct Player {
  char *name;
  int balence;
  int bet;
  int hand[21];
  int handSize;
  int score;
  int aces;
};

void set_up_player(struct Player *player);
void set_up_dealer(struct Player *player);

#endif
