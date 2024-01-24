#include <stdio.h>

#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main()
{
    display();
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    display();
    deQueue();
    display();
    enQueue(6);
    return 0;
}

void enQueue(int value)
{
    if (rear == SIZE - 1)
        printf("\nQueue is full");
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        items[++rear] = value;
        printf("\n Inserted %d", items[rear]);
    }
}

void deQueue()
{
    if (front == -1)
        printf("\n Queue is empty");
    else
    {
        printf("\n Deleted %d", items[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (rear == -1)
        printf("\n Queue is Empty");
    else
    {
        int i;
        printf("\n Queue elements are: \n");
        printf("{");
        for (i = front; i <= rear; i++)
        {
            printf("%d  ", items[i]);
        }
        printf("}");
    }
    printf("\n");
}
