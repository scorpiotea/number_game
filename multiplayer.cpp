#include "multiplayer.h"
#include "result.h"

void Multiplayer::multiplayer(Player &p, Player &p2)
{
  rules();

  get_player_number(p);
  get_player_number(p2);

  if (p.player_number == 7 || p.player_number == 11)
  {
    player_won(p);
    player_lost(p2);
  }
  if (p.player_number == 2)
  {
    player_won(p2);
    player_lost(p);
  }

  if (p2.player_number == 7 || p2.player_number == 11)
  {
    player_won(p2);
    player_lost(p);
  }
  if (p2.player_number == 2)
  {
    player_won(p);
    player_lost(p2);
  }

  while (end_game != 1)
  {
    score = result();
    score2 = result();
    player_throw_out(p);
    player2_throw_out(p2);

    if (score == 7 || score == 11)
    {
      player_won(p2);
      player_lost(p);
    }
    if (end_game == 1)
    {
      continue;
    }
    if (score == p.player_number)
    {
      player_won(p);
      player_lost(p2);
    }

    if (score2 == 7 || score2 == 11)
    {
      player_won(p2);
      player_lost(p);
    }
    if (end_game == 1)
    {
      continue;
    }
    if (score2 == p2.player_number)
    {
      player_won(p);
      player_lost(p2);
    }
  }
}