#include "CircularQueue.h"

template <typename T>
CircularQueue<T>::CircularQueue(int size)
    : capacity(size), front(0), rear(0), count(0) {
    data = new T[capacity];
}

template <typename T>
CircularQueue<T>::~CircularQueue() {
    delete[] data;
}

template <typename T>
void CircularQueue<T>::enqueue(const T& item) {
    if (isFull()) throw std::overflow_error("Circular queue is full");
    data[rear] = item;
    rear = (rear + 1) % capacity;
    ++count;
}

template <typename T>
T CircularQueue<T>::dequeue() {
    if (isEmpty()) throw std::underflow_error("Circular queue is empty");
    T item = data[front];
    front = (front + 1) % capacity;
    --count;
    return item;
}

template <typename T>
T CircularQueue<T>::peek() const {
    if (isEmpty()) throw std::underflow_error("Circular queue is empty");
    return data[front];
}

template <typename T>
bool CircularQueue<T>::isEmpty() const {
    return count == 0;
}

template <typename T>
bool CircularQueue<T>::isFull() const {
    return count == capacity;
}

template class CircularQueue<int>;