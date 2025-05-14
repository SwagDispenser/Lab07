//
// Created by Dmitrij Oblockow on 13.05.2025.
//

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdexcept>

template <typename T>
class ArrayStack {
private:
    T* data;
    int capacity;
    int topIndex;

public:
    ArrayStack(int size = 100);
    ~ArrayStack();

    void push(const T& item);
    T pop();
    T peek() const;

    bool isEmpty() const;
    bool isFull() const;
};


#endif //ARRAYSTACK_H
