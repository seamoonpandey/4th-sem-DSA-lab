#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

struct LinkedList
{
    Node *head;
};
typedef struct LinkedList Linkedlist;

void insertNodeAtEnd(Linkedlist *list, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
        return;
    }

    Node *current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void insertNodeAtStart(Linkedlist *list, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = list->head;
    list->head = newNode;
    return;
}

void insertNodeAtThatIndex(Linkedlist *list, int index, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    Node *currentNode = list->head;

    for (int i = 0; i < index - 1; i++)
    {
        currentNode = currentNode->next;
    }
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

void printList(Linkedlist *list)
{
    Node *current = list->head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    return;
}

int main()
{
    Linkedlist list = {.head = NULL}, list2 = {.head = NULL};

    insertNodeAtEnd(&list, 1);
    insertNodeAtEnd(&list, 2);
    insertNodeAtEnd(&list, 3);
    insertNodeAtEnd(&list, 100);

    printList(&list);
    insertNodeAtStart(&list, 22);
    printList(&list);
    insertNodeAtThatIndex(&list, 2, 7);
    printList(&list);

    // insertNodeAtEnd(&list2, 99);
    // printList(&list2);
}