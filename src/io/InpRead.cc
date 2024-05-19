#include "InpRead.h"

InpRead::InpRead() {}

InpRead::~InpRead() {}

void InpRead::read(std::string& file_name) {
    std::ifstream file(file_name);
    if (!file.is_open()) panic("InpRead : file open error");
}