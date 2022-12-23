#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *tail;

void reverseDList()
{
    struct node *temp, *nextnode;
    temp = head;
    while (temp != 0)
    {
        nextnode = temp->next;
        temp->next = temp->prev;
        temp->prev = nextnode;
        temp = nextnode;
    }
    // printf("the data of tail pointer is: %d\n", tail->data);
    // printf("the data of head pointer is: %d\n", head->data);
    temp = head;
    head = tail;
    tail = temp;
}

void create()
{
    struct node *temp, *newnode;
    head = 0;
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data that u want to enter: \n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("do want to continue (0/1) ? \n");
        scanf("%d", &choice);
    }
}

void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void main()
{
    create();
    reverseDList();
    display();
}