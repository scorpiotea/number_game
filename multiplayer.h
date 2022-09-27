#include "game.h"
#ifndef multiplayer_h
#define multiplayer_h

class Multiplayer : Game
{
public:
  void multiplayer(Player &p, Player &p2);
  void player2_throw_out(Player &p2);
  void both_win(Player &p, Player &p2);
  void both_loose(Player &p, Player &p2);
};

#endif