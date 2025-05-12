cmake_minimum_required(VERSION 3.30)
project(ooplb07)

set(CMAKE_CXX_STANDARD 20)

add_executable(ooplb07 main.cpp
        Node.h
        SinglyLinkedList.cpp
        SinglyLinkedList.h
        DoublyLinkedList.cpp
        DoublyLinkedList.h
)
