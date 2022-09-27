#include <iostream>
#include "player.h"
#include "singleplayer.h"
#include "multiplayer.h"

int main()
{
  Player player1("Player 1");
  Player player2("Player 2");

  Multiplayer *game = new Multiplayer;
  game->multiplayer(player1, player2);

  delete game;

  return 0;
}
