#include "NodeIter.h"

NodeIter::NodeIter(const NodeList& S) {
    s_ = &S;
    cur_ = NULL;
    flag_ = -1;
}

NodeIter::NodeIter(const NodeIter& S) {
    s_ = S.s_;
    flag_ = S.flag_;

    if (flag_ >= 0) {
        cur_ = s_->nodes()[flag_];
    } else {
        cur_ = NULL;
    }
}

NodeIter::~NodeIter() {}

void NodeIter::reset() {
    flag_ = -1;
    cur_ = nullptr;
}

Node& NodeIter::operator[](int i) {
    if (i >= s_->length()) {
        panic("NodeIter : vector index out of bounds");
    }
    return *cur_;
}

int NodeIter::operator++(int) {
    {
        if (s_->isEmpty()) return 0;
        flag_++;
        if (flag_ == s_->length()) {
            return 0;
        } else {
            cur_ = s_->nodes()[flag_];
            return 1;
        }
    }
}
