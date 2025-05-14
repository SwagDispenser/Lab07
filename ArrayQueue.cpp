#include "ArrayQueue.h"

template <typename T>
ArrayQueue<T>::ArrayQueue(int size)
    : capacity(size), front(0), rear(-1), count(0) {
    data = new T[capacity];
}

template <typename T>
ArrayQueue<T>::~ArrayQueue() {
    delete[] data;
}

template <typename T>
void ArrayQueue<T>::enqueue(const T& item) {
    if (isFull()) throw std::overflow_error("Queue is full");
    rear = (rear + 1) % capacity;
    data[rear] = item;
    ++count;
}

template <typename T>
T ArrayQueue<T>::dequeue() {
    if (isEmpty()) throw std::underflow_error("Queue is empty");
    T item = data[front];
    front = (front + 1) % capacity;
    --count;
    return item;
}

template <typename T>
T ArrayQueue<T>::peek() const {
    if (isEmpty()) throw std::underflow_error("Queue is empty");
    return data[front];
}

template <typename T>
bool ArrayQueue<T>::isEmpty() const {
    return count == 0;
}

template <typename T>
bool ArrayQueue<T>::isFull() const {
    return count == capacity;
}

// Explicit instantiation
template class ArrayQueue<int>;