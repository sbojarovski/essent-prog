//
// Created by stefan on 10/6/18.
//

#ifndef GENERIC_VECTOR_IO_H
#define GENERIC_VECTOR_IO_H

#include <iostream>
#include <iterator>
#include <vector>

void read_vector(std::vector<int> * input){
    // read int vec from std::cin (together with the size n)
    std::vector<int> arr( std::istream_iterator<int>( std::cin ),
                          std::istream_iterator<int>());
    *input = arr;
}

void print_vector(
        const std::vector<int> & input,
        const bool & rev=false) {
    if (rev)
        // print the vector in reverse
        std::copy(input.rbegin(),
                  input.rend(),
                  std::ostream_iterator<int>(std::cout, " ")
        );
    else
        // print the vector
        std::copy(input.begin(),
                  input.end(),
                  std::ostream_iterator<int>(std::cout, " ")
        );
}

#endif //GENERIC_VECTOR_IO_H
