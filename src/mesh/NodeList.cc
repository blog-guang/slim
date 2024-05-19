#include "NodeList.h"

NodeList::NodeList() {}

NodeList::NodeList(const NodeList& n) {
    this->deleteme();
    for (auto it : n.list_) {
        list_.push_back(it);
    }
}

NodeList::~NodeList() { this->deleteme(); }

NodeList& NodeList::operator=(const NodeList& nl) {
    if (this == &nl) return *this;

    this->deleteme();

    for (auto it : nl.list_) {
        list_.push_back(it);
    }

    return *this;
}
