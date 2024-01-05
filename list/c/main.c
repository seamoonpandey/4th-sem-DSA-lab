#include <stdio.h>
#include "linked_list.h"

int main()
{
    struct LinkedList list = {.head = NULL};

    Linkedlist list = {.head = NULL};

    insertNodeAtEnd(&list, 1);
    insertNodeAtEnd(&list, 2);
    insertNodeAtEnd(&list, 3);
    insertNodeAtEnd(&list, 100);

    printList(&list);
    insertNodeAtStart(&list, 22);
    printList(&list);
    insertNodeAtThatIndex(&list, 2, 7);
    printList(&list);

    deleteNode(&list, 3);
    printList(&list);

    reverseList(&list);
    printList(&list);

    return 0;
}
