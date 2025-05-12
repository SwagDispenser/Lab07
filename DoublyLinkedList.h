#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"
#include <iostream>
#include <stdexcept>

template <typename T>
class DoublyLinkedList {
private:
    std::shared_ptr<Node<T>> head;
    std::shared_ptr<Node<T>> tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void push_front(const T& value);
    void push_back(const T& value);
    void pop_front();
    void pop_back();
    void print() const;
};

#endif //DOUBLYLINKEDLIST_H
