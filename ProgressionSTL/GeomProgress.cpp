#include "GeomProgress.h"


bool GeomProgress_I::operator==(const GeomProgress_I &other) const {
    return curr == other.curr;
}


bool GeomProgress_I::operator!=(const GeomProgress_I &other) const {
    return curr < other.curr;
}


int &GeomProgress_I::operator*() {
    return curr;
}


GeomProgress_I& GeomProgress_I::operator++() {
    curr *= step;
    return *this;
}