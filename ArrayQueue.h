//
// Created by Dmitrij Oblockow on 13.05.2025.
//

#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <stdexcept>

template <typename T>
class ArrayQueue {
private:
    T* data;
    int capacity;
    int front;
    int rear;
    int count;

public:
    ArrayQueue(int size = 100);
    ~ArrayQueue();

    void enqueue(const T& item);
    T dequeue();
    T peek() const;

    bool isEmpty() const;
    bool isFull() const;
};


#endif //ARRAYQUEUE_H
