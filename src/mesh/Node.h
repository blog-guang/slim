#pragma once
#include "Coordinate.h"
#include "Element.h"

class Node : public Element {
    Node(Mesh& m, Coordinate& c) {
        mesh_ = &m;
        coor_ = &c;
    }

    Node(Mesh& m, const Node& n) {
        mesh_ = &m;
        coor_ = &(n.location());
    }

    Node(const Node& n) {
        coor_ = &n.location();
        id_ = n.globalID();
    }

    Node() {
        coor_ = nullptr;
        id_ = -1;
    }

    virtual ~Node();

    virtual ElementType Type() { return ElementType::Node; }

    // how many nods?
    virtual int nodeLength() const { return 1; }

    virtual int globalID() const { return id_; }

    void setGlobalID(int id) { id_ = id; }

    Coordinate& location() const { return *coor_; }

    Location position() { return Location(*coor_); }

private:
    Coordinate* coor_;

    int id_;
};