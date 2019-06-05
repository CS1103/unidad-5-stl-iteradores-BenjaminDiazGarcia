#ifndef PROGRESSIONSTL_ARITHPROGRESS_H
#define PROGRESSIONSTL_ARITHPROGRESS_H

class ArithProgress_I{
    int curr;
    int step;
    friend class ArithProgress;
    ArithProgress_I(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const ArithProgress_I& other) const;
    bool operator!=(const ArithProgress_I& other) const;
    int& operator*();
    ArithProgress_I& operator++();
    ArithProgress_I& operator++(int);
};

class ArithProgress {
    int start;
    int stop;
    int step;
public:
    explicit ArithProgress(int stop):start{0}, stop{stop}, step{1} {}
    ArithProgress(int start, int stop):start{start},
                               stop{stop}, step{1} {}
    ArithProgress(int start, int stop, int step):start{start},
                                         stop{stop}, step{step} {}
    using iterator = ArithProgress_I;
    iterator begin() const {
        return iterator(start, step);
    }

    iterator end() const {
        return iterator(stop, step);
    }
};


#endif