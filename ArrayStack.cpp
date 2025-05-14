#include "ArrayStack.h"

template <typename T>
ArrayStack<T>::ArrayStack(int size)
    : capacity(size), topIndex(-1) {
    data = new T[capacity];
}

template <typename T>
ArrayStack<T>::~ArrayStack() {
    delete[] data;
}

template <typename T>
void ArrayStack<T>::push(const T& item) {
    if (isFull()) throw std::overflow_error("Stack is full");
    data[++topIndex] = item;
}

template <typename T>
T ArrayStack<T>::pop() {
    if (isEmpty()) throw std::underflow_error("Stack is empty");
    return data[topIndex--];
}

template <typename T>
T ArrayStack<T>::peek() const {
    if (isEmpty()) throw std::underflow_error("Stack is empty");
    return data[topIndex];
}

template <typename T>
bool ArrayStack<T>::isEmpty() const {
    return topIndex == -1;
}

template <typename T>
bool ArrayStack<T>::isFull() const {
    return topIndex == capacity - 1;
}

template class ArrayStack<int>;