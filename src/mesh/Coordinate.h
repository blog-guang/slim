#pragma once

#include "Location.h"

class MeshServer;

class Coordinate : public Location {
public:
    Coordinate();
    Coordinate(MeshServer& ms, real x = 0.0, real y = 0.0, real z = 0.0) : ms_(&ms), Location(x, y, z){};
    Coordinate(MeshServer& ms, const Location& l) : ms_(&ms), Location(l){};
    Coordinate(const Coordinate& c) : Location(c.x(), c.y(), c.z()){};
    ~Coordinate();

private:
    MeshServer* ms_;
};
