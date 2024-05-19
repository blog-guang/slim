#pragma once

class Mesh;

class Element {
public:
    enum ElementType { Node, EDGE, FACE, VOL };

    Element();

    Element(Mesh& m);

    Element(const Element& e);

    virtual ~Element();

    void operator=(const Element& e);

    virtual ElementType Type() const = 0;

    virtual int nodeLength() = 0;

    Mesh& mesh() const;

    int dimension() const;

    void setMesh(Mesh& m) { mesh_ = &m; }

protected:
    Mesh* mesh_;
};
