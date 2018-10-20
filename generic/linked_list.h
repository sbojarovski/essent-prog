//
// Created by stefan on 10/10/18.
//

#ifndef GENERIC_LINKED_LIST_H
#define GENERIC_LINKED_LIST_H

#include <memory>
#include <vector>

template<typename T>
class List<T>{
public:

    template<typename>
    class Node<T>{

    public:
        std::shared_ptr< Node<T> > next;
        T val;
    };

    typedef Node<T> NodeT;
    typedef std::shared_ptr< NodeT > NodePtr;
    typedef std::vector< NodePtr > NodeList;

private:

    NodePtr head;
    NodePtr tail;

public:

    NodeList find(const T & val){
        auto node = this->head;
        NodeList output;
        while(node){
            if (node->val == val)
                output.push_back(node);
        }
        return output;
    };

    std::shared_ptr< Node<T> > push_back(const T & val){
        this->tail->next = NodePtr(val);
    };

    std::shared_ptr< Node<T> > insert_after(const Node<T> & node){

    };

    bool remove(const Node<T> & node){

    };
};

#endif //GENERIC_LINKED_LIST_H
