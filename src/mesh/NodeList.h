#pragma once
#include <vector>

#include "Node.h"

class NodeList {
public:
    NodeList();

    NodeList(const NodeList& n);

    ~NodeList();

    std::vector<Node*> nodes() const { return list_; }

    NodeList& operator=(const NodeList& nl);

    bool isEmpty() const { return list_.empty(); }

    int length() const { return (int)list_.size(); }

    void add(Node* n) { list_.push_back(n); }

    void deleteme() {
        for (auto it : list_) {
            delete it;
        }
        list_.clear();
    }

private:
    std::vector<Node*> list_;
};
