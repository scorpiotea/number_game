#include <chrono>
#include <thread>
#include "multiplayer.h"
#include "result.h"

void Multiplayer::player2_throw_out(Player &p)
{
  std::cout << p.player_name << " threw out " << score2 << std::endl;
}

void Multiplayer::both_win(Player &p, Player &p2)
{
  std::cout << "You both win ;)" << std::endl;
  end_game = 1;
}

void Multiplayer::both_loose(Player &p, Player &p2)
{
  std::cout << "You both lost ;)" << std::endl;
  end_game = 1;
}

void Multiplayer::multiplayer(Player &p, Player &p2)
{
  rules();

  get_player_number(p);
  std::this_thread::sleep_for(std::chrono::seconds(1));

  get_player_number(p2);
  std::this_thread::sleep_for(std::chrono::seconds(1));

  if ((p.player_number == 7 || p.player_number == 11) && (p2.player_number == 7 || p2.player_number == 11))
  {
    both_win(p, p2);
  }
  if (p.player_number == 2 && p2.player_number == 2)
  {
    both_loose(p, p2);
  }

  if (end_game != 1)
  {
    if (p.player_number == 7 || p.player_number == 11)
    {
      player_won(p);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p2);
    }
    if (p2.player_number == 7 || p2.player_number == 11)
    {
      player_won(p2);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p);
    }
    if (p.player_number == 2)
    {
      player_won(p2);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p);
    }
    if (p2.player_number == 2)
    {
      player_won(p);
      std::this_thread::sleep_for(std::chrono::seconds(1));
      player_lost(p2);
    }
  }

  while (end_game != 1)
  {
    score = result();
    score2 = result();

    player_throw_out(p);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    player2_throw_out(p2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    if ((p.player_number == 7 || p.player_number == 11) && (p2.player_number == 7 || p2.player_number == 11))
    {
      both_loose(p, p2);
    }

    if (score == p.player_number && score2 == p2.player_number)
    {
      both_win(p, p2);
    }

    if (score == 7 || score == 11)
    {
      player_won(p2);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p);
    }
    if (score2 == 7 || score2 == 11)
    {
      player_won(p);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p2);
    }
    if (end_game == 1)
    {
      continue;
    }
    if (score == p.player_number && score2 == p2.player_number)
    {
      both_win(p, p2);
    }
    if (score == p.player_number)
    {
      player_won(p);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p2);
    }
    if (score2 == p2.player_number)
    {
      player_won(p);
      std::this_thread::sleep_for(std::chrono::seconds(1));

      player_lost(p2);
    }
    if (end_game == 1)
    {
      continue;
    }
  }
}