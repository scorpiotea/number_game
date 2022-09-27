#include <string>
#ifndef player_h
#define player_h

class Player
{
private:
  std::string player_name{};
  int player_number{};

public:
  Player() = default;
  Player(std::string name);

  friend class Game;
};

#endif