#pragma once
#include "iostream"

class Material {
public:
    Material(const std::string n) : nm_(n) {}
    virtual ~Material();

    std::string name() const { return nm_; }

    void setName(std::string name) { nm_ = name; }

    int materialID() { return matID_; }

private:
    std::string nm_;
    int matID_;
};
