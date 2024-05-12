#pragma once
#include "Coordinate.h"
#include "Element.h"

class Node : public Element {
    Node(Mesh& m, Location& l) {}
    Node(Mesh& m, Node n) {}
    Node(const Node& n) {}
    Node();
    virtual ~Node();

    virtual ElementType Type() { return ElementType::Node; }

    // how many nods?
    virtual int nodeLength() { return 1; }

    virtual int globalID() { return id_; }

    void setGlobalID(int id) { id_ = id; }

    Location position() { return Location(*coor_); }

private:
    Coordinate* coor_;

    int id_;
};