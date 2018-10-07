//
// Created by stefan on 10/6/18.
//

#ifndef GENERIC_BINARY_TREE_H
#define GENERIC_BINARY_TREE_H

#include <memory>

class BinaryTree{
private:
    class Node{
    public:
        int v;
        std::shared_ptr<Node> left;
        std::shared_ptr<Node> right;
    };
    std::shared_ptr<Node> root;
public:
    BinaryTree():root(){};
    std::shared_ptr<Node> find(const int & k){
        return root;
    };
    std::shared_ptr<Node> insert(const int & k){
        return root;
    };

};

#endif //GENERIC_BINARY_TREE_H
