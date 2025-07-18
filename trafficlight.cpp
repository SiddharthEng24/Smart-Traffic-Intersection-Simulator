//
// Created by Ebose on 2025-07-07.
//

#include "trafficlight.h"
#include <chrono>;
#include <thread>;

trafficlight::trafficlight(int dir, int start_state) {
    this->direction = dir;
    this->stopSignal = false;
    if (start_state == 1) {this->current = Green;}
    else {this->current = Red;}
}
void trafficlight::changecolour() {
    while (!stopSignal) {
        std::lock_guard<std::mutex> lock(mt);
        if (current == Red) {
            std::this_thread::sleep_for(std::chrono::seconds(30));
            current = Green;
        }
        else if (state == Green) {
            std::this_thread::sleep_for(std::chrono::seconds(25));
            current = Yellow;
        }
        else if (state == Yellow) {
            std::this_thread::sleep_for(std::chrono::seconds(5));
            current = Red;
        }
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



