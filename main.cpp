using namespace std;

#include "robotcontroller.h"
#include <ctime>
#include <iostream>
#include <vector>

int main() {
//defined class that is used to intialize game and play game
  controller build;
//string that stops the game initialized to y to start game
  string x = "y"; 
/*
While keeps game running if the string isn't intialized to the 
value to break out and if actually plays the game if the string 
is initalized to start game value
*/
  while(x!="n"){
    if(x=="y"){
      cout << "How many players:";
      getline(cin, x);
//main game exists as class
      build.initializeGame(stoi(x));
      build.playGame();
    }
    cout << "Would you like to play again? (y/n)";
    getline(cin, x);
  }
  cout << "\n\nThanks for playing";
}
