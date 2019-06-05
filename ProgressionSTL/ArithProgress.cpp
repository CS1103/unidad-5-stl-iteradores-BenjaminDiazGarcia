#include "ArithProgress.h"

bool ArithProgress_I::operator==(const ArithProgress_I &other) const {
    return curr == other.curr;
}


bool ArithProgress_I::operator!=(const ArithProgress_I &other) const {
    return curr < other.curr;
}


int &ArithProgress_I::operator*() {
    return curr;
}


ArithProgress_I& ArithProgress_I::operator++() {
    curr += step;
    return *this;
}


ArithProgress_I& ArithProgress_I::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}