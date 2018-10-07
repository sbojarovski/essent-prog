//
// Created by stefan on 10/6/18.
//

#ifndef INC_06_01_DUTCH_FLAG_COUNT_SORT_H
#define INC_06_01_DUTCH_FLAG_COUNT_SORT_H

#include <vector>
#include <algorithm>

#include "range.h"

// you would usually get k beforehead
std::vector<int> count_sort(
        const std::vector<int> & input){

    // calculate the count for all keys
    std::vector<int> output(input.size());

    auto minmax = std::minmax_element(input.begin(), input.end());
    int low = *minmax.first;
    int high = *minmax.second;
    std::vector<int> count(high - low + 1, 0);
    for (auto i : input){
        count.at(i - low) += 1;
    }

    // calculate the starting index for each key
    int total = 0;
    for (auto i : Range(0, count.size())) {
        int oldCount = count.at(i);
        count.at(i) = total;
        total += oldCount;
    }
    for (auto i : input){
        output.at(count.at(i - low)) = i;
        count.at(i - low) += 1;
    }
    return output;
}

#endif //INC_06_01_DUTCH_FLAG_COUNT_SORT_H
