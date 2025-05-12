#include "SinglyLinkedList.h"

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList() : head(nullptr) {}

template <typename T>
void SinglyLinkedList<T>::push_front(const T& value) {
    auto newNode = std::make_shared<Node<T>>(value);
    newNode->next = head;
    head = newNode;
}

template <typename T>
void SinglyLinkedList<T>::push_back(const T& value) {
    auto newNode = std::make_shared<Node<T>>(value);
    if (!head) {
        head = newNode;
        return;
    }
    auto current = head;
    while (current->next) current = current->next;
    current->next = newNode;
}

template <typename T>
void SinglyLinkedList<T>::pop_front() {
    if (!head) throw std::runtime_error("List is empty");
    head = head->next;
}

template <typename T>
void SinglyLinkedList<T>::pop_back() {
    if (!head) throw std::runtime_error("List is empty");
    if (!head->next) {
        head = nullptr;
        return;
    }
    auto current = head;
    while (current->next->next) current = current->next;
    current->next = nullptr;
}

template <typename T>
T& SinglyLinkedList<T>::at(size_t index) {
    auto current = head;
    for (size_t i = 0; current && i < index; ++i) current = current->next;
    if (!current) throw std::out_of_range("Index out of range");
    return current->data;
}

template <typename T>
void SinglyLinkedList<T>::insert(size_t index, const T& value) {
    if (index == 0) return push_front(value);
    auto current = head;
    for (size_t i = 0; current && i < index - 1; ++i) current = current->next;
    if (!current) throw std::out_of_range("Index out of range");
    auto newNode = std::make_shared<Node<T>>(value);
    newNode->next = current->next;
    current->next = newNode;
}

template <typename T>
void SinglyLinkedList<T>::remove(size_t index) {
    if (index == 0) return pop_front();
    auto current = head;
    for (size_t i = 0; current && i < index - 1; ++i) current = current->next;
    if (!current || !current->next) throw std::out_of_range("Index out of range");
    current->next = current->next->next;
}

template <typename T>
size_t SinglyLinkedList<T>::size() const {
    size_t count = 0;
    auto current = head;
    while (current) {
        ++count;
        current = current->next;
    }
    return count;
}

template <typename T>
bool SinglyLinkedList<T>::empty() const {
    return !head;
}

template <typename T>
bool SinglyLinkedList<T>::contains(const T& value) const {
    auto current = head;
    while (current) {
        if (current->data == value) return true;
        current = current->next;
    }
    return false;
}

template <typename T>
void SinglyLinkedList<T>::print() const {
    auto current = head;
    while (current) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

template class SinglyLinkedList<int>;
template class SinglyLinkedList<std::string>;