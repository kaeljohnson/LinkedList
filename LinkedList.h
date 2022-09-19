class Node {
  public:
    int value;
    Node* next;
    Node* prev;

    Node();
    Node(int val);
};

class LinkedList {
  public:
    Node* head;

    LinkedList();
    LinkedList(int val);
    void addNode(int val);
    void removeNode(int idx);
    void printList();
    Node* getHead();
    Node* getTail();
};