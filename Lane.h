//
// Created by Ebose on 2025-07-07.
//

#ifndef LANE_H
#define LANE_H

class Lane {
private:
    std::string direction; //N,S,E, or, W
    queue<Vehicle> vehicles;
public:
    Lane(std::string dir);
    addVehicle(Vehicle vehicle);
    bool isEmpty();
    void move();
};



#endif //LANE_H
