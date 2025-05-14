//
// Created by Dmitrij Oblockow on 13.05.2025.
//

#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <stdexcept>


template <typename T>
class CircularQueue {
private:
    T* data;
    int capacity;
    int front;
    int rear;
    int count;

public:
    CircularQueue(int size = 100);
    ~CircularQueue();

    void enqueue(const T& item);
    T dequeue();
    T peek() const;

    bool isEmpty() const;
    bool isFull() const;
};

#endif //CIRCULARQUEUE_H
