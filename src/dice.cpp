#include <iostream>
#include <random>
#include "dice.h"

int dice()
{
  int random_number{};

  std::random_device device;
  std::uniform_int_distribution<int> dist(1, 6);

  random_number = dist(device);

  return random_number;
}