#include "Location.h"

Location::Location() {
    xc_ = 0.0;
    yc_ = 0.0;
    zc_ = 0.0;
}

Location::Location(const Location& coor) {
    xc_ = coor.x();
    yc_ = coor.y();
    zc_ = coor.z();
}

Location::~Location() {}