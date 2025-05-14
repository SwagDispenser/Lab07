//
// Created by Dmitrij Oblockow on 13.05.2025.
//

#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include <stdexcept>

template <typename T>
class LinkedStack {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* top;

public:
    LinkedStack();
    ~LinkedStack();

    void push(const T& item);
    T pop();
    T peek() const;

    bool isEmpty() const;
    bool isFull() const;
};

#endif //LINKEDSTACK_H
