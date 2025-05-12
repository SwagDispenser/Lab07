#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include <string>

int main() {
    SinglyLinkedList<int> sList;
    sList.push_back(1);
    sList.push_back(2);
    sList.push_front(0);
    sList.print();

    DoublyLinkedList<std::string> dList;
    dList.push_back("hello");
    dList.push_front("world");
    dList.print();

    return 0;
}
