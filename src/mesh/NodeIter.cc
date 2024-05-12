#include "NodeIter.h"

NodeIter::NodeIter() {}
NodeIter::NodeIter(const NodeList& nl) {
    list_ = &nl;
    cur = NULL;
    flag = -1;
}

NodeIter::~NodeIter() {}

int NodeIter::operator++() {
    if (list_->isEmpty()) return 0;
    flag++;
    if (flag == list_->Length() - 1) {
        return 0;
    } else {
        cur = list_->nodes()[flag];
        return 1;
    }
}