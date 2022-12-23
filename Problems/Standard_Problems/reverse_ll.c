#include <stdio.h>
#include <stdlib.h>

// Reversing a linked list by iterative method of approach
// creating our own data type
// by writing this the node is not been created

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void reverseList()
{
    struct node *temp, *nextnode;
    temp = nextnode = head;
    struct node *prevnode = NULL;
    while (temp != NULL)
    {
        nextnode = temp->next;
        temp->next = prevnode;
        prevnode = temp;
        temp = nextnode;
    }
    head = prevnode;
}
void create()
{

    struct node *newnode, *temp;
    head = 0;
    int choice = 1, count = 0;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data that you want to enter: \n");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
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
    reverseList();
    display();
}
