//
// Created by Ebose on 2025-07-07.
//

#include "trafficlight.h"
#include <chrono>;
#include <thread>;
//whenever we make the light we're gonna make a thread
trafficlight::trafficlight(int dir, int start_state) {
    this->direction = dir;
    this->stopSignal = false;
    if (start_state == 1) {this->current = Green;}
    else {this->current = Red;}
}
void trafficlight::changecolour() {
    while (!stopSignal) {
        {
        std::lock_guard<std::mutex> lock(mt);
        if (current == Red) {current = Green;}
        else if (current == Green) {current = Yellow;}
        else {current = Red;}
        }
        std::this_thread::sleep_for(
                current == Red ? std::chrono::seconds(30) :
                current == Green ? std::chrono::seconds(25) :
                std::chrono::seconds(5)
            );
    }
}
void trafficlight::stop() {this->stopSignal = true;}
int trafficlight::getstate() {
    switch (this->state) {
        std::lock_guard<std::mutex> lock(mt);
        case Red:
            return 0;
            break;
        case Green:
            return 1;
            break;
        case Yellow:
            return 2;
            break;
        default: return -1;
    }
}



