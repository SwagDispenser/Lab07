#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include "Node.h"
#include <memory>
#include <cstddef>
#include <iostream>
#include <stdexcept>

template <typename T>
class SinglyLinkedList {
private:
    std::shared_ptr<Node<T>> head;

public:
    SinglyLinkedList();

    void push_front(const T& value);
    void push_back(const T& value);
    void pop_front();
    void pop_back();
    T& at(size_t index);
    void insert(size_t index, const T& value);
    void remove(size_t index);
    size_t size() const;
    bool empty() const;
    bool contains(const T& value) const;
    void print() const;
};

#endif //SINGLYLINKEDLIST_H
