#pragma once

#include "Location.h"
#include "MeshServer.h"

class Coordinate : public Location {
public:
    Coordinate();
    Coordinate(MeshServer& ms, real x = 0.0, real y = 0.0, real z = 0.0);
    Coordinate(MeshServer& ms, const Location& l);
    Coordinate(const Coordinate& c);
    ~Coordinate();

private:
    MeshServer* ms_;
};
