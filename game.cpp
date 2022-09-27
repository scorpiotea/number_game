#include <iostream>
#include "game.h"
#include "player.h"
#include "dice.h"
#include "result.h"

void Game::rules()
{
  std::cout << " ~ Here are the game rules ~" << std::endl
            << " " << std::endl;
  std::cout << " * Your number is determinated in first throw." << std::endl;
  std::cout << " * You can win first try by throwning out numer 7 or 11." << std::endl;
  std::cout << " * If you throw out 2 you win lose at the start." << std::endl;
  std::cout << " * If you haven't got the numbers above you will play as long \n as you don't score "
            << "numbers 7 or 11 ( you lose ) or the equivalent \n of your starting number ( you win )." << std::endl
            << " " << std::endl;
}

void Game::menu()
{
  std::cout << "MENU :" << std::endl
            << "Singleplayer mode (1)" << std::endl
            << "Multiplayer mode (2)" << std::endl
            << " " << std::endl;
  std::cout << "Choose the mode you want to play: ";
  std::cin >> mode;
  std::cout << " " << std::endl
            << "START" << std::endl;
  std::cout << " " << std::endl;
}

void Game::get_player_name(Player &p)
{
  std::cout << p.player_name;
}

void Game::get_player_number(Player &p)
{
  std::cout << p.player_number;
}

void Game::play(Player &p)
{
  menu();
  rules();
  if (mode == 1)
  {

    std::cout << p.player_name << " your number is " << p.player_number << std::endl;

    if (p.player_number == 7 || p.player_number == 11)
    {
      std::cout << p.player_name << " you won :)";
      end_game = 1;
    }
    if (p.player_number == 2)
    {
      std::cout << p.player_name << " you lost :(";
      end_game = 1;
    }
    while (end_game != 1)
    {
      score = result();
      std::cout << " " << p.player_name << " threw out " << score << std::endl;

      if (score == 7 || score == 11)
      {
        std::cout << " " << p.player_name << " you lost :(" << std::endl;
        end_game = 1;
      }
      if (end_game == 1)
      {
        continue;
      }
      if (score == p.player_number)
      {
        std::cout << " " << p.player_name << " you won :)" << std::endl;
        end_game = 1;
      }
    }
  }
}