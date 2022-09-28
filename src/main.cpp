#include <iostream>
#include "player.h"
#include "singleplayer.h"
#include "multiplayer.h"

int main()
{
  Player player1("Player 1");
  Player player2("Player 2");

  Singleplayer *game = new Singleplayer;
  game->singleplayer(player1);

  delete game;

  Multiplayer *game2 = new Multiplayer;
  game2->multiplayer(player1, player2);

  delete game2;

  return 0;
}
