#include <iostream>
#include "player.h"
#ifndef game_h
#define game_h

class Game
{
protected:
  int end_game{};
  int score{};
  int score2{};

public:
  void rules();
  void menu();

  void get_player_name(Player &p);
  void get_player_number(Player &p);
  void player_won(Player &p);
  void player_lost(Player &p);
  void player_throw_out(Player &p);
  void player2_throw_out(Player &p2);
};

#endif