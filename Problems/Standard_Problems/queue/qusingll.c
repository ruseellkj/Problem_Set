// implementing queue using linked list in c
#include <stdio.h>
#include <stdlib.h>

struct queuenode
{
    int data;
    struct queuenode *next;
};

struct queuenode *front = 0;
struct queuenode *rear = 0;

void enqueue(int x)
{
    struct queuenode *newnode;
    newnode = (struct queuenode *)malloc(sizeof(struct queuenode));
    newnode->data = x;
    newnode->next = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void queuedisplay()
{
    struct queuenode *temp;
    if (front == 0 && rear == 0)
    {
        printf("the queue is empty \n");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("%d\t ", temp->data);
            temp = temp->next;
        }
    }
}

void dequeue()
{
    struct queuenode *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty \n");
    }
    else 
    {
        printf("\n%d", front->data);
        printf("\n");
        front = front->next;
        free(temp);
    }
}


void queuepeek()
{
    if (front == 0 && rear == 0)
    {
        printf("the queue is empty \n");
    }
    else
    {
        printf("\n%d", front->data);
    }
}

void main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    queuedisplay();
    dequeue();
    queuedisplay();
    queuepeek();
    // stackTop();
}
