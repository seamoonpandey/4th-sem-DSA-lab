#include <iostream>

template <typename T>
class Node {
    T data;
    Node<T> *next;

public:
    Node(T data) : data(data), next(nullptr) {}

    template <typename U>
    friend class LinkedList;
};

template <typename T>
class LinkedList {
    Node<T> *head;

public:
    LinkedList() : head(nullptr) {}

    void insertNodeAtEnd(T data) {
        Node<T> *newNode = new Node<T>(data);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node<T> *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertNodeAtStart(T data) {
        Node<T> *newNode = new Node<T>(data);

        newNode->next = head;
        head = newNode;
    }

    void insertNodeAtThatIndex(T data, int index) {
        Node<T> *newNode = new Node<T>(data);
        Node<T> *currentNode = head;

        for (int i = 0; i < index - 1; i++) {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }

    void deleteNode(int index) {
        Node<T> *temp1 = head, *temp2 = nullptr;
        int listLen = 0;

        if (head == nullptr) {
            throw "List empty";
        }

        while (temp1 != nullptr) {
            temp1 = temp1->next;
            listLen++;
        }

        if (index <= 0 || listLen < index) {
            Node<T> *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        temp1 = head;
        while (index--) {
            temp2 = temp1;
            temp1 = temp1->next;
        }

        temp2->next = temp1->next;

        delete temp1;
    }

    void print() {
        Node<T> *temp = head;

        if (head == nullptr) {
            std::cout << "List empty" << std::endl;
        }

        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
