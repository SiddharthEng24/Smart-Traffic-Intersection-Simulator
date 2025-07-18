//
// Created by Ebose on 2025-07-07.
//

#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

class trafficlight {
private:
    std::string direction; //N,S,E or W
    int timer;
    enum state {Red, Green, Yellow};
    state state;
public:
    trafficlight(std::string dir);
    void changecolour();
};



#endif //TRAFFICLIGHT_H
