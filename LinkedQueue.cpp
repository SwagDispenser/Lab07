#include "LinkedQueue.h"

template <typename T>
LinkedQueue<T>::LinkedQueue() : front(nullptr), rear(nullptr) {}

template <typename T>
LinkedQueue<T>::~LinkedQueue() {
    while (!isEmpty()) dequeue();
}

template <typename T>
void LinkedQueue<T>::enqueue(const T& item) {
    Node* node = new Node{item, nullptr};
    if (rear) rear->next = node;
    rear = node;
    if (!front) front = node;
}

template <typename T>
T LinkedQueue<T>::dequeue() {
    if (isEmpty()) throw std::underflow_error("Queue is empty");
    Node* temp = front;
    T val = temp->data;
    front = front->next;
    if (!front) rear = nullptr;
    delete temp;
    return val;
}

template <typename T>
T LinkedQueue<T>::peek() const {
    if (isEmpty()) throw std::underflow_error("Queue is empty");
    return front->data;
}

template <typename T>
bool LinkedQueue<T>::isEmpty() const {
    return front == nullptr;
}

template <typename T>
bool LinkedQueue<T>::isFull() const {
    return false;
}

template class LinkedQueue<int>;