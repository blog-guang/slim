#pragma once
#include "NodeList.h"

class NodeIter {
public:
    NodeIter();
    NodeIter(const NodeList& nl);
    NodeIter(const NodeIter& ni);
    ~NodeIter();

    int operator++();
    Node& current() { return *cur_; }
    int index();

private:
    const NodeList* list_;
    Node* cur_;
    int flag_;
    int deepcopy_;
};