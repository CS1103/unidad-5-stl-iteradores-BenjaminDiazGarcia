#ifndef PROGRESSIONSTL_FIBONACCIPROGRESS_H
#define PROGRESSIONSTL_FIBONACCIPROGRESS_H

#include <iostream>

class FibonacciProgress_I {
    int curr;
    int step_1;
    int step_2;
    friend class FibonacciProgress;
    FibonacciProgress_I(int curr, int step, int step2):
            curr{curr}, step_1{step}, step_2{step2} {};
    FibonacciProgress_I(int curr, int step):
            curr{curr}, step_1{step} {};
public:
    bool operator==(const FibonacciProgress_I& other) const;
    bool operator!=(const FibonacciProgress_I& other) const;
    int& operator*();
    FibonacciProgress_I& operator++();
};

class FibonacciProgress {
    int start = 0;
    int stop;
    int step = 0;
    int step2 = 1;
public:
    FibonacciProgress(int stop):start{1}, stop{stop} {}
    using iterator = FibonacciProgress_I;
    iterator begin() const {
        return iterator(start, step, step2);
    }

    iterator end() const {
        return iterator(stop, step);
    }
};


#endif
