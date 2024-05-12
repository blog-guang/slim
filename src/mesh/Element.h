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

    virtual ElementType Type() const { return ElementType::Node; }

    Mesh& mesh() { return *mesh_; }

private:
    Mesh* mesh_;
};
