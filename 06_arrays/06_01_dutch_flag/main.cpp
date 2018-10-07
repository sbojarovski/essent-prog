#include <iostream>
#include <vector>

#include "range.h"
#include "vector_io.h"
#include "vector_utils.h"
#include "count_sort.h"

// Dutch flag problem:
// Given an array A and index i, sort A such that:
//  - any element less than A[i] appears first
//  - any element greater than A[i] appears after
// O(n) time, O(1) space, meaning linear and inplace
// the values of the array are in some range {1..k}, where k is not that big

void dutch_flag(
        std::vector<int> * input,
        unsigned long idx){
    int pivot = input->at(idx);
    unsigned long smaller = 0, equal = 0, larger = input->size() - 1;

    while (equal <= larger){
        if (input->at(equal) < pivot){
            swap(input, smaller, equal);
            smaller++;
            equal++;
        } else if (input->at(equal) == pivot){
            equal++;
        } else {
            swap(input, equal, larger);
            larger--;
        }
    }
}


int main() {
    std::vector<int> input;
    read_vector(&input);
    unsigned long idx;
    std::cin >> idx;
    dutch_flag(&input, idx);
    print_vector(input);
    return 0;
}