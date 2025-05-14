//
// Created by Dmitrij Oblockow on 13.05.2025.
//

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <stdexcept>

template <typename T>
class LinkedQueue {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* front;
    Node* rear;

public:
    LinkedQueue();
    ~LinkedQueue();

    void enqueue(const T& item);
    T dequeue();
    T peek() const;

    bool isEmpty() const;
    bool isFull() const;
};


#endif //LINKEDQUEUE_H
