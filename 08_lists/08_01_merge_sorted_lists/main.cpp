#include <iostream>

#include "vector_io.h"

int main() {
    std::vector<int> v1 = {1, 3, 5, 7};
    std::vector<int> v2 = {2, 4, 6, 8, 10};
    std::vector<int> output;
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    while (it1 != v1.end() && it2 != v2.end()){
        int v = *it1 <= *it2 ? *it1 : *it2;
        output.push_back(v);
        *it1 <= *it2 ? ++it1 : ++it2;
    }
    if (it1 == v1.end())
        output.insert(output.end(), it2, v2.end());
    if (it2 == v2.end())
        output.insert(output.end(), it1, v1.end());

    print_vector(output);
    return 0;
}