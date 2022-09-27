#include <iostream>
#include "player.h"
#include "dice.h"
#include "game.h"

int main()
{
  Player player("Oliwia");

  Game *game = new Game;

  game->play(player);

  delete game;

  return 0;
}
