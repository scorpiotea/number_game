#include <iostream>
#include "player.h"
#ifndef game_h
#define game_h

class Game
{
private:
  std::string choice{};
  int mode{};
  int end_game{};
  int score{};

public:
  void rules();
  void menu();

  void get_player_name(Player &p);
  void get_player_number(Player &p);

  void play(Player &p);
};

#endif