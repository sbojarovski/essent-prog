//
// Created by stefan on 10/6/18.
//

#ifndef GENERIC_RANGE_H
#define GENERIC_RANGE_H

//https://stackoverflow.com/a/47767064/401043
struct Range {
    struct Iterator {
        Iterator(int v, int s) : val(v), step(s) {}

        int operator*() const {
            return val;
        }

        Iterator &operator++() {
            val += step;
            return *this;
        }

        bool operator!=(Iterator const &rhs) const {
            return (this->val < rhs.val);
        }

        int val;
        int step;
    };

    Range(int l, int h, int s = 1) : low(l), high(h), step(s) {}

    Iterator begin() const {
        return Iterator(low, step);
    }

    Iterator end() const {
        return Iterator(high, 1);
    }

    int low, high, step;
};

#endif //GENERIC_RANGE_H
