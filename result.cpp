#include "result.h"
#include "dice.h"

int result()
{
  int result;
  result = dice() + dice();
  return result;
}