#include "LinkedList.h"

Node::Node() {
    value = 0;
    next = nullptr;
    prev = nullptr;
}

Node::Node(int val) {
    value = val;
    next = nullptr;
    prev = nullptr;
}

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int headVal) {
    head = new Node(headVal);
}

void LinkedList::addNode(int valToAdd) {
    Node* newNode = new Node(valToAdd);
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* iteratorNode = head;
        while (iteratorNode->next != nullptr) {
            iteratorNode = iteratorNode->next;
        }
        iteratorNode->next = newNode;
        iteratorNode->next->prev = iteratorNode;
        iteratorNode->next->next = nullptr;
    }
}
void LinkedList::removeNode(int valToRemove) {
    
}


