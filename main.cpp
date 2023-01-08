using namespace std;

#include "robotcontroller.h"
#include <ctime>
#include <iostream>
#include <vector>

int main() {
  controller build;
  string x = "y"; 
  while(x!="n"){
    if(x=="y"){
      cout << "How many players:";
      getline(cin, x);
      build.initializeGame(stoi(x));
      build.playGame();
    }
    cout << "Would you like to play again? (y/n)";
    getline(cin, x);
  }
  cout << "\n\nThanks for playing";
}
