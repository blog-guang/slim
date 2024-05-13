#include "NodeIter.h"

NodeIter::NodeIter() {
    list_ = NULL;
    flag_ = -1;
    cur_ = NULL;
}
NodeIter::NodeIter(const NodeList& nl) {
    list_ = &nl;
    cur_ = NULL;
    flag_ = -1;
}

NodeIter::~NodeIter() {}

int NodeIter::operator++() {
    if (list_->isEmpty()) return 0;
    flag_++;
    if (flag_ == list_->Length() - 1) {
        return 0;
    } else {
        cur_ = list_->nodes()[flag_];
        return 1;
    }
}