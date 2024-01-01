#include <stdio.h>
#include "linked_list.h"

int main()
{
    struct LinkedList list = {.head = NULL};

    int choice;
    int data, index;

    do
    {
        printf("\n1. Insert at the end\n");
        printf("2. Insert at the start\n");
        printf("3. Insert at a specific index\n");
        printf("4. Delete at a specific index\n");
        printf("5. Print the list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at the end: ");
            scanf("%d", &data);
            insertNodeAtEnd(&list, data);
            break;

        case 2:
            printf("Enter data to insert at the start: ");
            scanf("%d", &data);
            insertNodeAtStart(&list, data);
            break;

        case 3:
            printf("Enter index to insert at: ");
            scanf("%d", &index);
            printf("Enter data to insert at index %d: ", index);
            scanf("%d", &data);
            insertNodeAtThatIndex(&list, index, data);
            break;

        case 4:
            printf("Enter index to delete: ");
            scanf("%d", &index);
            deleteNode(&list, index);
            break;

        case 5:
            printList(&list);
            break;

        case 0:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
