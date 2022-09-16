#include <iostream>
#include <cstdlib>
using namespace std;

int dice()
{
  int a;
  a = rand() % 6 + 1;
  return a;
}
int result()
{
  int result;
  result = dice() + dice();
  return result;
}
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
class Player
{
public:
  string username;

  void getUsername()
  {
    cout << "Enter username: ";
    cin >> username;
  }
};

int main()
{
  int user_number, user_number2, end, mode, score, score2;
  string choice;

  Player one;

  cout << "MENU :" << endl
       << "Singleplayer mode (1)" << endl
       << "Multiplayer mode (2)" << endl
       << " " << endl;
  cout << "Choose the mode you want to play: ";
  cin >> mode;

  if (mode == 1)
  {
    rules();
    one.getUsername();
  }

  if (mode == 2)
  {
    rules();

    // cout << "Player one name: ";
    // cin >> user_name;
    // cout << "Player two name: ";
    // cin >> user_name2;
  }

  do
  {

    cout << " " << endl
         << "START" << endl
         << " " << endl;

    user_number = dice() + dice();

    if (mode == 1)
    {
      cout << " " << one.username << " your number is " << user_number << endl;
    }

    if (user_number == 7 || user_number == 11)
    {
      cout << " " << one.username << " you won :)" << endl;
      end = 1;
    }
    if (user_number == 2)
    {
      cout << " " << one.username<< " you lost :(" << endl;
      end = 1;
    }
    if (mode == 2)
    {
      user_number2 = dice() + dice();
      cout << " " << one.username << " your number is " << user_number << endl;
      cout << " " << one.username << " your number is " << user_number2 << endl;
      if (user_number == 7 || user_number == 11)
      {
        cout << " " << one.username << " won :)" << endl;
        cout << " " << one.username << " lost :(" << endl;
        end = 1;
      }
      if (user_number == 2)
      {
        cout << " " << one.username << " lost :(" << endl;
        cout << " " << one.username << " won :)" << endl;
        end = 1;
      }
      if (user_number2 == 7 || user_number2 == 11)
      {
        cout << " " << one.username << " won :)" << endl;
        cout << " " << one.username << " lost :(" << endl;
        end = 1;
      }
      if (user_number2 == 2)
      {
        cout << " " << one.username << " lost :(" << endl;
        cout << " " << one.username << " won :)" << endl;
        end = 1;
      }
      while (end != 1)
      {
        score = result();
        score2 = result();
        cout << " " << one.username << " threw out " << score << endl;
        cout << " " << one.username << " threw out " << score2 << endl;

        if (score == 7 || score == 11)
        {
          cout << " " << one.username << " lost :(" << endl;
          cout << " " << one.username << " won :)" << endl;
          end = 1;
        }
        if (score2 == 7 || score2 == 11)
        {
          cout << " " << one.username << " lost :(" << endl;
          cout << " " << one.username << " won :)" << endl;
          end = 1;
        }
        if (end == 1)
        {
          continue;
        }
        if (score == user_number)
        {
          cout << " " << one.username << " won :)" << endl;
          cout << " " << one.username << " lost :(" << endl;
          end = 1;
        }
        if (score2 == user_number2)
        {
          cout << " " << one.username << " won :)" << endl;
          cout << " " << one.username << " lost :(" << endl;
          end = 1;
        }
      }
    }
    while (end != 1)
    {
      score = result();
      cout << " " << one.username << " threw out " << score << endl;
      if (score == 7 || score == 11)
      {
        cout << " " << one.username << " you lost :(" << endl
             << " " << endl;
        end = 1;
      }
      if (end == 1)
      {
        continue;
      }
      if (score == user_number)
      {
        cout << " " << one.username << " you won :)" << endl
             << " " << endl;
        end = 1;
      }
    }

    cout << " Do you want to play again? ( yes or no ) " << endl;
    cout << " Your choice is : ";
    cin >> choice;
    end = 0;

  } while (choice == "yes");

  return 0;
}
