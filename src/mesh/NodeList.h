#pragma once
#include <algorithm>
#include <vector>

#include "Node.h"

class NodeList {
public:
    NodeList();
    ~NodeList();

    std::vector<Node*> nodes() const { return list_; }
    NodeList& operator=(const NodeList& nl);
    bool isEmpty() const { return list_.empty(); }
    int Length() const { return (int)list_.size(); }
    void Add(Node* n);
    void Add(NodeList& nl);
    void Clear() { list_.clear(); }

private:
    std::vector<Node*> list_;
    int max;
    int cur_max;
};
