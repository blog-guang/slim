#pragma once
#include "NodeList.h"

class NodeIter {
public:
    NodeIter();
    NodeIter(const NodeList& nl);
    NodeIter(const NodeIter& ni);
    ~NodeIter();

    int operator++();
    Node& current();
    int index();

private:
    const NodeList* list_;
    Node* cur;
    int flag;
    int deepcopy;
};