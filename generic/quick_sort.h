//
// Created by stefan on 10/20/18.
//

#ifndef GENERIC_QUICK_SORT_H
#define GENERIC_QUICK_SORT_H

#include <memory>
#include <vector>

template<class RandomIt, class Compare>
void quick_sort(RandomIt first, RandomIt last, Compare comp){

}

void qsort(std::vector<int> * input){
    auto lo = input->begin();
    auto hi = input->rbegin();
    auto i = std::next(lo);
    auto j = input->rbegin();

    // partitioning
    while (*i < *lo && i != input.end()) i++;
    while (*j > *lo) j--;
    std::swap(*i, *j);
}

#endif //GENERIC_QUICK_SORT_H
