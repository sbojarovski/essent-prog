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
        std::shared_ptr<void> val;
        unsigned int lbl;
        std::unordered_set<unsigned int> adj;
    };

    struct VertexHash {
        size_t operator()(const Vertex & v) const noexcept {
            return std::hash<unsigned int>{}(v.lbl);
        }
    };
    struct VertexComp {
        bool operator()(const Vertex & v1, const Vertex & v2) const noexcept {
            return v1.lbl == v2.lbl;
        }
    };
    std::unordered_set<Vertex, VertexHash, VertexComp> V;
};

#endif //GENERIC_GRAPH_H
