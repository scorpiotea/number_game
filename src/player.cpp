#include <iostream>
#include "player.h"
#include "dice.h"

Player::Player(std::string name)
  : player_name(name)
{
  player_number = dice() + dice();

}
