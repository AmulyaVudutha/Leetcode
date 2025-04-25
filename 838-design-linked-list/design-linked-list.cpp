class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index >= size || index < 0) return -1;
        Node* curr = head;
        for (int i = 0; i < index; i++) 
            curr = curr->next;
        return curr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next) 
            curr = curr->next;
            curr->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
        return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 0; i < index - 1; i++)
            curr = curr->next;
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }

    void deleteAtHead() {
        if (!head) return;
        Node* curr = head;
        head = head->next;
        delete curr;
        size--;
    }

    void deleteAtTail() {
        if (!head) 
        return;
        if (!head->next) {
            delete head;
            head = nullptr;
        } 
        else {
            Node* curr = head;
            while (curr->next->next)
            curr = curr->next;
            delete curr->next;
            curr->next = nullptr;
        }
        size--;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        if (index == 0) {
            deleteAtHead();
        } else {
            Node* curr = head;
            for (int i = 0; i < index - 1; i++) curr = curr->next;
            Node* toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
            size--;
        }
    }
};