#include <iostream>
#include "robot.h"
using namespace std;

robot::robot(){
  for(int i=0; i<7; i++)
    robot_[i] = 0;
}

bool robot::addWheel(){
  if (robot_[0]==3){
    return false;
  }
  else{
    robot_[0] = robot_[0] + 1;
    return true;
  }
}

bool robot::addAxle(){
  if (robot_[0]<robot_[1]+1){
    return false;
  }
  else{
    robot_[1]=robot_[1]+1;
    return true;
  }
}

bool robot::addTorso(){
  if (robot_[1]!=3 || robot_[2]!=0){
    return false;
  }
  else{
    robot_[2]=1;
    return true;
  }
}

bool robot::addPlunger(){
  if (robot_[2]!=1 || robot_[3]==1){
    return false;
  }
  else{
    robot_[3]=1;
    return true;
  }
}

bool robot::addHead(){
  if (robot_[2]!=1 || robot_[4]==1){
    return false;
  }
  else{
    robot_[4]=1;
    return true;
  }
}

bool robot::addAntenna(){
  if (robot_[4]!=1 || robot_[5]==2){
    return false;
  }
  else{
    robot_[5]=robot_[5]+1;
    return true;
  }
}

bool robot::addPowerCells(){
  if (robot_[2]!=1 || robot_[6]==4){
    return false;
  }
  else{
    robot_[6]=robot_[6]+1;
    return true;
  }
}

//count start

int robot::countWheel(){
  return robot_[0];
}

int robot::countAxle(){
  return robot_[1];
}

int robot::countTorso(){
  return robot_[2];
}

int robot::countPlunger(){
  return robot_[3];
}

int robot::countHead(){
  return robot_[4];
}

int robot::countAntenna(){
  return robot_[5];
}

int robot::countPowerCells(){
  return robot_[6];
}

//count end

bool robot::complete(){
  if (robot_[3]==1 && robot_[6]==4 && robot_[5]==2)
    return true;
  return false;
}

void robot::print(){
  std::cout << "Wheels:" << robot_[0]
<< " Axles:" << robot_[1] << " Torso:" << robot_[2]
<< " Plunger:" << robot_[3] << " Head:" << robot_[4]
<< " Antenna:" << robot_[5] << " Power Cells:" << robot_[6];
}

void robot::setName(std::string name){
  name_ = name;
}

std::string robot::getName(){
  return name_;
}
