#include "game.h"
#include "player.h"
#include "singleplayer.h"
#include "result.h"

void Singleplayer::singleplayer(Player &p)
{
  rules();

  get_player_number(p);

  if (p.player_number == 7 || p.player_number == 11)
  {
    player_won(p);
  }
  if (p.player_number == 2)
  {
    player_lost(p);
  }
  while (end_game != 1)
  {
    score = result();
    player_throw_out(p);

    if (score == 7 || score == 11)
    {
      player_lost(p);
    }
    if (end_game == 1)
    {
      continue;
    }
    if (score == p.player_number)
    {
      player_won(p);
    }
  }
}