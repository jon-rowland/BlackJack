#include "player.h"
#include "input.h"
#include "output.h"
#include <stdio.h>

void set_up_player(struct Player *player)
{
    print_get_player_name(0);
    player[1].name = str_input(1);
    player[1].handSize = 0;
    player[1].score = 0;
    player[1].aces = 0;
    player[1].balence = 1000;
}

void set_up_dealer(struct Player *player)
{
  player[0].name = "Dealer";
  player[0].handSize = 0;
  player[0].score = 0;
  player[0].aces = 0;
  player[0].balence = 0;
}
