#include <iostream>
#include <vector>
#include "robotcontroller.h"
#include "robot.h"

using namespace std;

void clearScreen();
int diceRoll(int &diceRolls);

void controller::initializeGame(int numPlayers){
  rob_.clear();
  rolls_.clear();
  numPlay_ = numPlayers;
  for(int i = 0; i < numPlayers; i++){
    rob_.push_back(initializeRob_);
    cout << endl << "Write your name player " << i+1 <<": ";
    getline(cin,name_);
    rob_[i].setName(name_);
    rolls_.push_back(0);
  }
}

void controller::playGame(){
  for(int i = 0; !rob_[(i+numPlay_-1)%numPlay_].complete(); i = (i+1)%numPlay_) {
    clearScreen();
    cout << "Player #" << i + 1 << " ";
    switch (diceRoll(rolls_[i])) {
      case 1:
        if(rob_[i].addWheel())
        cout << "You added a wheel" << endl;
        else
          cout << "You can't add a wheel" << endl;
        break;
      case 2:
        if(rob_[i].addAxle())
          cout << "You added an axle" << endl;
        else
          cout << "You can't add an axle" << endl;
        break;
      case 3:
        if(rob_[i].addTorso())
          cout << "You added a torso" << endl;
        else
          cout << "You can't add a torso" << endl;
        break;
      case 4:
        if(rob_[i].addPlunger())
          cout << "You added a plunger" << endl;
        else
          cout << "You can't add a plunger" << endl;
        break;
      case 5:
        if(rob_[i].addHead())
          cout << "You added a head" << endl;
        else
          cout << "You can't add a head" << endl;
        break;
      case 6:
        if(rob_[i].addAntenna())
          cout << "You added an antenna" << endl;
        else
          cout << "You can't add an antenna" << endl;
        break;
      case 7:
        if(rob_[i].addPowerCells())
          cout << "You added a power cell" << endl;
        else
          cout << "You can't add a power cell" << endl;
        break;
      default:
        cout << "there was an error";
    }
    cout << "This is roll number " << rolls_[i] << " for player " 
    << rob_[i].getName() << "." << endl;
    rob_[i].print();
    cout << endl << endl;
    cout << "press enter to continue";
    getline(cin,pause_);
    if(rob_[i].complete()){
      cout << endl << endl << "Player #" << i+1 << " " << rob_[i].getName()       << " wins.\n\n";
    }
  }
}

void clearScreen() {
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl;
}

int diceRoll(int &diceRolls) {
  int roll = rand() % 7 + 1;
  cout << "You rolled a " << roll << endl;
  diceRolls = diceRolls + 1;
  return roll;
}
