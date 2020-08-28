// lab2
// Vincent Gabb
//
// 8/28/2020
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  srand(time(0));

  int ties = 0;
  int user_Wins = 0;
  int computer_Wins = 0;
  int users_Choice;
  int computers_Choice;

  cout << "Welcome to Rock, Paper, Scissors.\n\n";

  cout << "Choose rock, paper, or scissors by entering in a number.\n\n";

  while (users_Choice != 4) { 

    cout << "--------------------------------------------------------\n";

  cout << "1 = rock : 2 = paper : 3 = scissors : 4 = exit the game.\n\n";

  cout << "Your choice: ";

  cin >> users_Choice;

  computers_Choice = rand() %  3 + 1;

    if (users_Choice == 1) {
     cout << "\nYou chose rock.\n";
      } else if (users_Choice == 2) {
     cout << "\nYou chose paper.\n";
      } else if (users_Choice == 3) {
     cout << "\nYou chose scissors.\n";
      } else if (users_Choice == 4) 
        break;

    if (computers_Choice == 1) {
     cout << "The computer chose rock.\n";
      } else if (computers_Choice == 2) {
     cout << "The computer chose paper.\n";
      } else if (computers_Choice == 3) {
     cout << "The computer chose scissors.\n";
    }

    // vvv .Program determines who won. vvv

    if (computers_Choice == 1 && users_Choice == 2) {
      cout << "You win!\n\n";
      user_Wins ++;
    } else if (computers_Choice == 1 && users_Choice == 1) {
      cout << "Tie!\n\n";
      ties ++;
    } else if (computers_Choice == 1 && users_Choice == 3) {
      cout << "The computer wins!\n\n";
      computer_Wins ++;
    }

    if (computers_Choice == 2 && users_Choice == 1) {
      cout << "The computer wins!\n\n";
      computer_Wins ++;
    } else if (computers_Choice == 2 && users_Choice == 2) {
      cout << "Tie!\n\n";
      ties ++;
    } else if (computers_Choice == 2 && users_Choice == 3) {
      cout << "You win!\n\n";
      user_Wins ++;
    }

    if (computers_Choice == 3 && users_Choice == 2) {
      cout << "The computer wins!\n\n";
      computer_Wins ++;
    } else if (computers_Choice == 3&& users_Choice == 3) {
      cout << "Tie!\n\n";
      ties ++;
    } else if (computers_Choice == 3 && users_Choice == 1) {
      cout << "You win!\n\n";
      user_Wins ++;
    }

}

  cout << "\nGame Exited\n\n";

  cout << "You won: " << user_Wins << " games\n";

  cout << "The computer won: " << computer_Wins << " games\n";

  cout << "You and the computer tied: " << ties << " games";


  return 0;
}
