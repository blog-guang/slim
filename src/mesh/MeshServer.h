#pragma once

class MeshServer {
public:
    MeshServer();
    ~MeshServer();

    int dimension() { return dim_; }
    void setDimension(const int d) { dim_ = d; }

private:
    int dim_;
};

extern MeshServer ms;
