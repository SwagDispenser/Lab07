#include "DoublyLinkedList.h"
#include <iostream>

template <typename T>
void DoublyLinkedList<T>::push_front(const T& value) {
    auto newNode = std::make_shared<Node<T>>(value);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::push_back(const T& value) {
    auto newNode = std::make_shared<Node<T>>(value);

    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::pop_front() {
    if (head != nullptr) {
        if (head->next != nullptr) {
            head = head->next;
            head->prev.reset(); // Reset previous pointer to nullptr
        } else {
            head.reset();
            tail.reset();
        }
    }
}

template <typename T>
void DoublyLinkedList<T>::pop_back() {
    if (tail != nullptr) {
        if (tail->prev.lock() != nullptr) {
            tail = tail->prev.lock();
            tail->next.reset(); // Reset next pointer to nullptr
        } else {
            head.reset();
            tail.reset();
        }
    }
}

template <typename T>
void DoublyLinkedList<T>::print() const {
    auto current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template class DoublyLinkedList<int>;
template class DoublyLinkedList<std::string>;