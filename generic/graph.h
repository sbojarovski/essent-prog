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
        float weight;
        std::unordered_set<unsigned int> adj;
    };
    class Edge{
    public:
        float weight;
        unsigned int src;
        unsigned int dst;
    };

    std::unordered_set<Vertex> V;
    std::
};

#endif //GENERIC_GRAPH_H
