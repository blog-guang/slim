#pragma once

typedef double real;
class Location {
public:
    Location();
    Location(const real x, const real y, const real z) : xc_(x), yc_(y), zc_(z) {}
    Location(const Location& l);
    ~Location();

    real x() const { return xc_; }
    real y() const { return yc_; }
    real z() const { return zc_; }

private:
    real xc_;
    real yc_;
    real zc_;
};
