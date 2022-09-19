#include <iostream>

#include "LinkedList.h"

int main() {
    LinkedList newList = LinkedList(4);
    std::cout << "slerp\n";

    newList.addNode(6);

    newList.printList();

    std::cout << "\n" << newList.getHead()->value << "\n";

    newList.addNode(9);
    newList.addNode(11);

    newList.printList();

    newList.removeNode(1);

    newList.printList();

    newList.removeNode(2);

    newList.printList();

    newList.removeNode(6);
}
