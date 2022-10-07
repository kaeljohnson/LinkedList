#include "LinkedList.h"
#include <iostream>

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

void LinkedList::removeNode(int idx) {
    int nodeCount = 0;
    Node* iteratorNode = head;
    while (nodeCount < idx-1) {
        if (iteratorNode->next == nullptr) {
            std::cout << "index out of bounds\n";
            return;
        }
        iteratorNode = iteratorNode->next;
        nodeCount++;
    }
    Node* temp = iteratorNode->next;
    iteratorNode->next = iteratorNode->next->next;
    iteratorNode->next->prev = iteratorNode;
    delete temp;
}

void LinkedList::printList() {
    Node* iteratorNode = head;
    while (iteratorNode->next != nullptr) {
        std::cout << iteratorNode->value << " -> ";
        iteratorNode = iteratorNode->next;
    }
    std::cout << iteratorNode->value << " -> nullptr\n";
}

Node* LinkedList::getHead() {
    return head;
}

Node* LinkedList::getTail() {

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    return tail;
}


