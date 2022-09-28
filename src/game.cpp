#include <iostream>
#include <chrono>
#include <thread>
#include "game.h"

void Game::rules()
{
  std::cout << " ~ Here are the game rules ~" << std::endl
            << " " << std::endl;
  std::cout << " * Your number is determinated in first throw." << std::endl;
  std::cout << " * You can win first try by throwning out numer 7 or 11." << std::endl;
  std::cout << " * If you throw out 2 you lose at the start." << std::endl;
  std::cout << " * If you haven't gotten the numbers above, you will play as long \n as you don't score "
            << "numbers 7 or 11 ( you lose ) or the equivalent \n of your starting number ( you win )." << std::endl
            << " " << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(5));
}

void Game::get_player_number(Player &p)
{
  std::cout << p.player_name << " your number is " << p.player_number << std::endl;
}

void Game::player_won(Player &p)
{
  std::cout << p.player_name << " you won :)" << std::endl;
  end_game = 1;
}

void Game::player_lost(Player &p)
{
  std::cout << p.player_name << " you lost :(" << std::endl;
  end_game = 1;
}

void Game::player_throw_out(Player &p)
{
  std::cout << p.player_name << " threw out " << score << std::endl;
}