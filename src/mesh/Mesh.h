#pragma once
#include "Element.h"
#include "NodeIter.h"
#include "NodeList.h"

class Mesh {
public:
    Mesh();
    virtual ~Mesh();

    int dimension() { return dim_; }

    void SetDim(int d) { dim_ = d; }

    NodeIter nodes() const { return NodeIter(nl_); }

private:
    // mesh dimension
    int dim_;
    NodeList nl_;
};
