//
// Created by stefan on 10/6/18.
//

#ifndef GENERIC_VECTOR_UTILS_H
#define GENERIC_VECTOR_UTILS_H
#include <vector>
void swap(
        std::vector<int> * input,
        unsigned long first,
        unsigned long second
        ){
    int tmp = input->at(first);
    input->at(first) = input->at(second);
    input->at(second) = tmp;
}

#endif //GENERIC_VECTOR_UTILS_H
