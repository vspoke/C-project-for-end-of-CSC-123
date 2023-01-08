#ifndef _ROBOT_H_
#define _ROBOT_H_

#include<string>

class robot{
  public:
    robot();
    bool addWheel();
    bool addAxle();
    bool addTorso();
    bool addPlunger();
    bool addHead();
    bool addAntenna();
    bool addPowerCells();

    int countWheel();
    int countAxle();
    int countTorso();
    int countPlunger();
    int countHead();
    int countAntenna();
    int countPowerCells();

    bool complete();
    void print();
    void setName(std::string name);
    std::string getName();
  private:
    int robot_[7];
    std::string name_;
};

#endif
