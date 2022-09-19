class Node {
  public:
    int value;
    Node* next;
    Node* prev;

    Node();
    Node(int val);
};

class LinkedList {
  private:
    Node* head;

  public:
    LinkedList();
    LinkedList(int val);
    void addNode(int val);
    void removeNode(int idx);
};