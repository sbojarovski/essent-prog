//
// Created by stefan on 10/6/18.
//

#ifndef GENERIC_VECTOR_IO_H
#define GENERIC_VECTOR_IO_H

#include <iostream>
#include <iterator>
#include <vector>
#include <type_traits>

void read_vector(std::vector<int> * input){
    // read int vec from std::cin (together with the size n)
    std::vector<int> arr( std::istream_iterator<int>( std::cin ),
                          std::istream_iterator<int>());
    *input = arr;
}

void read_vector(std::vector<char> * input){
    // read int vec from std::cin (together with the size n)
    std::vector<char> arr( std::istream_iterator<char>( std::cin ),
                          std::istream_iterator<char>());
    *input = arr;
}

template<typename T>
void print_vector(
        const std::vector<T> & input,
        const bool & rev=false) {
    static_assert(std::is_fundamental<T>::value, "Vector type must be fundamental (int, char etc.)");
    if (rev)
        // print the vector in reverse
        std::copy(input.rbegin(),
                  input.rend(),
                  std::ostream_iterator<T>(std::cout, " ")
        );
    else
        // print the vector
        std::copy(input.begin(),
                  input.end(),
                  std::ostream_iterator<T>(std::cout, " ")
        );
}

#endif //GENERIC_VECTOR_IO_H
