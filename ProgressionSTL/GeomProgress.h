#ifndef PROGRESSIONSTL_GEOMPROGRESS_H
#define PROGRESSIONSTL_GEOMPROGRESS_H

class GeomProgress_I {
    int curr;
    int step;
    friend class GeomProgress;
    GeomProgress_I(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const GeomProgress_I& other) const;
    bool operator!=(const GeomProgress_I& other) const;
    int& operator*();
    GeomProgress_I& operator++();
    GeomProgress_I& operator++(int);
};

class GeomProgress {
    int start;
    int stop;
    int step;
public:
    explicit GeomProgress(int stop):start{0}, stop{stop}, step{1} {}
    GeomProgress(int start, int stop):start{start},
                               stop{stop}, step{1} {}
    GeomProgress(int start, int stop, int step):start{start},
                                         stop{stop}, step{step} {}
    using iterator = GeomProgress_I;
    iterator begin() const {
        return iterator(start, step);
    }

    iterator end() const {
        return iterator(stop, step);
    }
};


#endif
