#include <iostream>
#include <vector>
#include <limits>

#include "vector_io.h"

typedef std::vector<std::vector<int>> weighted_graph;

const int MAXINT = std::numeric_limits<int>::max();

std::vector<int>
dijsktra(
        const weighted_graph & g,
        const unsigned long & start
        ){
    const unsigned long nV = g.size();
    std::vector<int> costs(nV, MAXINT);
    std::vector<int> from_vertex(nV, start);
    std::vector<bool> visited(nV, false);
    visited.at(start) = true;
    unsigned long current = start;
    bool repeat = true;
    while(repeat){
        repeat = false;
        int local_min = -1;
        for (unsigned long i = 0; i < nV; ++i){
            if (!visited.at(i) && )
        }
    }
    return costs;
}

int main() {
    weighted_graph g = {
            {1, 1, 0, 0, 1},
            {1, 1, 1, 0, 0},
            {0, 1, 1, 1, 0},
            {0, 0, 1, 1, 1},
            {1, 0, 0, 1, 1}
    };
    print_vector(dijsktra(g, 0));
    return 0;
}