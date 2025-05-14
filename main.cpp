#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include "ArrayQueue.h"
#include "CircularQueue.h"
#include "LinkedQueue.h"
#include "ArrayStack.h"
#include "LinkedStack.h"
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

    ArrayQueue<int> aq(5);
    aq.enqueue(10);
    aq.enqueue(20);
    std::cout << "ArrayQueue front: " << aq.peek() << "\n";

    CircularQueue<int> cq(5);
    cq.enqueue(30);
    cq.enqueue(40);
    std::cout << "CircularQueue front: " << cq.peek() << "\n";

    LinkedQueue<int> lq;
    lq.enqueue(50);
    lq.enqueue(60);
    std::cout << "LinkedQueue front: " << lq.peek() << "\n";

    ArrayStack<int> as(5);
    as.push(70);
    as.push(80);
    std::cout << "ArrayStack top: " << as.peek() << "\n";

    LinkedStack<int> ls;
    ls.push(90);
    ls.push(100);
    std::cout << "LinkedStack top: " << ls.peek() << "\n";

    return 0;
}
