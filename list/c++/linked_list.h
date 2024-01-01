#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    friend class Linkedlist;
};

class Linkedlist
{
    Node *head;

public:
    Linkedlist() { head = NULL; }

    // end of the linked list
    void insertNodeAtEnd(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // start of the linked list
    void insertNodeAtStart(int data)
    {
        Node *newNode = new Node(data);

        newNode->next = head;
        head = newNode;
        return;
    }

    // insertion at certain position/index
    void insertNodeAtThatIndex(int data, int index)
    {
        Node *newNode = new Node(data);
        Node *currentNode = head;

        for (int i = 0; i < index - 1; i++)
        {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }

    // deleteNode at given position
    void deleteNode(int index)
    {
        Node *temp1 = head, *temp2 = NULL;
        int ListLen = 0;

        if (head == NULL)
        {
            throw "List empty";
        }

        while (temp1 != NULL)
        {
            temp1 = temp1->next;
            ListLen++;
        }

        if (index <= 0 || ListLen < index)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        temp1 = head;
        while (index--)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }

        temp2->next = temp1->next;

        delete temp1;
    }

    // print all the values

    void print()
    {
        Node *temp = head;

        if (head == NULL)
        {
            cout << "List empty" << endl;
        }

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};