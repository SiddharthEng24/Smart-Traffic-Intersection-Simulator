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
    std::string direction; //N,S,E or W
public:
    Vehicle(id,std::string dir); //constructor
    getdirection();
};



#endif //VEHICLE_H
