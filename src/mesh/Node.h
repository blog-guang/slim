#pragma once
#include "Coordinate.h"
#include "Element.h"

class Node : public Element {
public:
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

    Node() {}

    virtual ~Node() {}

    virtual ElementType Type() const { return ElementType::Node; }

    // how many nods?
    virtual int nodeLength() const { return 1; }

    virtual int globalID() const { return id_; }

    void setGlobalID(int id) { id_ = id; }

    Coordinate& location() const { return *coor_; }

    Location position() { return Location(*coor_); }

protected:
    Coordinate* coor_;

    int id_;
};