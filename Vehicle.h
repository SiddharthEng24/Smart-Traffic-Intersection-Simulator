//
// Vehicle header for organization of things
// Created by Ebose on 2025-07-07.
//

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
    int wait_time;
    int id;
    int direction; //1=N,-1=E
    double speed = 35.7;
public:
    Vehicle(int id,int dir); //constructor
    int getdirection();
};



#endif //VEHICLE_H
