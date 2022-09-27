#include <iostream>
#include "player.h"
#include "singleplayer.h"
#include "multiplayer.h"

int main()
{
  Player player1("Oliwia");
  Player player2("Piotr");

  Multiplayer *game = new Multiplayer;
  game->multiplayer(player1, player2);

  delete game;

  return 0;
}
