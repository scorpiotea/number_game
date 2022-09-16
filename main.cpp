#include <iostream>
#include <cstdlib>

using namespace std;

void rules()
{
  cout << " " << endl
       << " ~ Here are the game rules ~" << endl
       << " " << endl;
  cout << " * Your number is determinated in first throw." << endl;
  cout << " * You can win first try by throwning out numer 7 or 11." << endl;
  cout << " * If you throw out 2 you win lose at the start." << endl;
  cout << " * If you haven't got the numbers above you will play as long \n as you don't score "
       << "numbers 7 or 11 ( you lose ) or the equivalent \n of your starting number ( you win )." << endl
       << " " << endl;
}

int throwDice()
{
  int a;
  a = rand() % 6 + 1;
  return a;
}

int result()
{
  int result;
  result = throwDice() + throwDice();
  return result;
}

int main()
{
  int userNumber2, end, score, score2, mode, endGame;
  string choice, playerName;

  int playerNumber = throwDice() + throwDice();

  cout << "MENU :" << endl
       << "Singleplayer mode (1)" << endl
       << "Multiplayer mode (2)" << endl
       << " " << endl;
  cout << "Choose the mode you want to play: ";
  cin >> mode;
  cout << " " << endl
       << "START" << endl;
  rules();
  cout << "Enter username: ";
  cin >> playerName;

  do
  {
    if (mode == 1)
    {
      int playerNumber = throwDice() + throwDice();

      cout << playerName << " your number is " << playerNumber << endl;

      if (playerNumber == 7 || playerNumber == 11)
      {
        cout << playerName << " you won :)";
        endGame = 1;
      }
      if (playerNumber == 2)
      {
        cout << playerName << " you lost :(";
        endGame = 1;
      }
      while (end != 1)
      {
        score = result();
        cout << " " << playerName << " threw out " << score << endl;

        if (score == 7 || score == 11)
        {
          cout << " " << playerName << " you lost :(" << endl;
          endGame = 1;
        }
        if (endGame == 1)
        {
          continue;
        }
        if (score == playerNumber)
        {
          cout << " " << playerName << " you won :)" << endl;
          endGame = 1;
        }
      }
    }
  } while (choice == "yes");
  
  return 0;
}
