#pragma once
#include "Element.h"
#include "Material.h"
#include "NodeIter.h"
#include "NodeList.h"

class Mesh {
public:
    Mesh();
    virtual ~Mesh();

    int dimension() { return dim_; }

    void setDim(int d) { dim_ = d; }

    NodeIter nodes() const { return NodeIter(nl_); }

    Material& material() const { return *mater_; }

private:
    // mesh dimension
    int dim_;
    NodeList nl_;
    Material* mater_;
};
