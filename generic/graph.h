#include <utility>

//
// Created by stefan on 10/23/18.
//

#ifndef GENERIC_GRAPH_H
#define GENERIC_GRAPH_H

#include <memory>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>


class Graph{
public:
    class Vertex{
    public:
        unsigned int lbl;
        std::unordered_set<unsigned int> adj;
    };

    std::unordered_set<Vertex> V;
};

#endif //GENERIC_GRAPH_H
