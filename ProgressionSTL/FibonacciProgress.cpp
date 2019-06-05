#include "FibonacciProgress.h"

bool FibonacciProgress_I::operator==(const FibonacciProgress_I &other) const {
    return curr == other.curr;
}


bool FibonacciProgress_I::operator!=(const FibonacciProgress_I &other) const {
    return curr < other.curr;
}


int &FibonacciProgress_I::operator*() {
    return curr;
}


FibonacciProgress_I& FibonacciProgress_I::operator++() {
    curr = step_1 + step_2;
    step_1 = step_2;
    step_2 = curr;
    return *this;
}
