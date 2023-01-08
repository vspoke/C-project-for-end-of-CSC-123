#ifndef _ROBOTCONTROLLER_H_
#define _ROBOTCONTROLLER_H_
#include "robot.h";
#include "vector"
#include <string>

class controller{
  public:
    void initializeGame(int numPlayers);
    void playGame();
  private:
    std::vector<robot> rob_;
    std::string name_;
    std::vector<int> rolls_;
    robot initializeRob_;
    std::string pause_;
    int numPlay_;
};

#endif
