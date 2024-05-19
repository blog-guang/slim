#pragma once

#include "NodeList.h"
#include "util/util.h"

class NodeIter {
public:
    NodeIter(const NodeList&);
    NodeIter(const NodeIter&);

    ~NodeIter();

    // provide an indexing object, but discourage the use
    Node& operator[](int i);

    // get the length functions
    int isEmpty() const { return s_->isEmpty(); }
    int Length() const { return s_->length(); }

    // go to the beginning of the list
    void reset();

    // returns 0 at the end of the list
    int operator++(int);

    // get various pieces of the list
    Node& current() const { return *cur_; }

    // return the current index into the array, useful for other arrays
    int index() { return flag_; }

protected:
    const NodeList* s_;
    Node* cur_;
    int flag_;
};