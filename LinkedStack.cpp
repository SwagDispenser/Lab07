#include "LinkedStack.h"

template <typename T>
LinkedStack<T>::LinkedStack() : top(nullptr) {}

template <typename T>
LinkedStack<T>::~LinkedStack() {
    while (!isEmpty()) pop();
}

template <typename T>
void LinkedStack<T>::push(const T& item) {
    Node* node = new Node{item, top};
    top = node;
}

template <typename T>
T LinkedStack<T>::pop() {
    if (isEmpty()) throw std::underflow_error("Stack is empty");
    Node* temp = top;
    T val = temp->data;
    top = top->next;
    delete temp;
    return val;
}

template <typename T>
T LinkedStack<T>::peek() const {
    if (isEmpty()) throw std::underflow_error("Stack is empty");
    return top->data;
}

template <typename T>
bool LinkedStack<T>::isEmpty() const {
    return top == nullptr;
}

template <typename T>
bool LinkedStack<T>::isFull() const {
    return false;
}

template class LinkedStack<int>;