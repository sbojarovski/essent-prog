#include <iostream>
#include <vector>

#include "vector_io.h"
#include "graph.h"

typedef std::vector<std::vector<int>> graph;

bool dfs(
        const graph & input,
        const int & start,
        const int & end
        ){
    std::vector<int> output;
    output.push_back(start);
    while(!output.empty()){
        int current = output.front();
        output.pop_back();
        for(int i = 0; i < input[current].size(); i++){
            if (input[current][i] == 1 && i != start && i != current){
                output.push_back(i);
                if (i == end)
                    return true;
            }
        }
    }
    return false;
};





int main() {

    //      a b c d e
    //  a   1 1 0 0 0
    //  b   1 1 1 0 1
    //  c   0 1 1 1 0
    //  d   0 0 1 1 1
    //  e   0 1 0 1 1
    graph input = {
            {1,1,0,0,0},
            {1,1,1,0,1},
            {0,1,1,1,0},
            {0,0,1,1,1},
            {0,1,0,1,1}
    };
//    std::cout << dfs(input, 0, 3) << std::endl;
    Graph g = {{
                       {0, {0, 1}},
                       {1, {0, 1, 2}},
                       {2, {1, 2, 3}},
                       {3, {2, 3, 4}},
                       {4, {1, 3, 4}}
               }
    };
    return 0;

}