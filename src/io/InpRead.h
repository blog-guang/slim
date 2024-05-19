#pragma once

#include <fstream>
#include <string>
#include <vector>

#include "mesh/NodeIter.h"

struct MeshNode {
    int id;
    double x;
    double y;
    double z;
};

struct MeshElement {
    int id;
    int n1;
    int n2;
    int n3;
    int n4;
};

class InpRead {
public:
    InpRead();
    ~InpRead();

    void read(std::string& file_name);
    void test() {
        NodeList nl;
        NodeIter ni(nl);
        ni.reset();

        while (ni++) {
            ni.current();
        }
    }
};
