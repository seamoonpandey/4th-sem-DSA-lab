#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct LinkedList
{
    struct Node *head;
};

void insertNodeAtEnd(struct LinkedList *list, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

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

    struct Node *current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
}

void printList(struct LinkedList *list)
{
    struct Node *current = list->head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf('\n');
    return;
}

int main()
{
    struct LinkedList list = {.head = NULL}, list2 = {.head = NULL};

    insertNodeAtEnd(&list, 1);
    insertNodeAtEnd(&list, 2);
    insertNodeAtEnd(&list, 3);
    insertNodeAtEnd(&list, 100);

    printList(&list);
    insertNodeAtEnd(&list2, 99);
    printList(&list2);
}