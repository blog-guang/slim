#pragma once
#include "MeshIter.h"
#include "MeshList.h"

class MeshServer {
public:
    MeshServer();
    ~MeshServer();

    int dimension() { return dim_; }
    void setDimension(const int d) { dim_ = d; }
    MeshIter meshs() const;

private:
    int dim_;
    MeshList ml_;
};

extern MeshServer ms;
