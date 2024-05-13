#pragma once
// #include "Mesh.h"

class Mesh;

class Element {
public:
    enum ElementType { Node, EDGE, FACE, VOL };

    Element();

    Element(Mesh* m) : mesh_(m) {}

    Element(const Element& e);

    virtual ~Element();

    void operator=(const Element& e);

    virtual ElementType Type() = 0;

    virtual int nodeLength() = 0;

    Mesh& mesh() { return *mesh_; }

protected:
    Mesh* mesh_;
};
