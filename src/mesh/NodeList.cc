#include "NodeList.h"

NodeList::NodeList() {}

NodeList::~NodeList() {}

NodeList& NodeList::operator=(const NodeList& nl) {
    list_ = nl.nodes();
    return *this;
}

void NodeList::Add(Node* n) {
    // auto it = std::find(list_.begin(), list_.end(), n);
    // if (it == list_.end()) {
    //     list_.push_back(n);
    // }
    list_.push_back(n);
}

void NodeList::Add(NodeList& nl) {
    if (!nl.isEmpty()) {
        list_.insert(list_.end(), nl.nodes().begin(), nl.nodes().end());
    }
}
