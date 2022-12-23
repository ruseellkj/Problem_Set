#include <stdio.h>
#include <stdlib.h>

// defining our own data type
struct node
{
    int data;
    struct node *next;
};

struct node *head;

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

        if (head == 0)
        {
            head = temp = newnode;
            temp->next = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
            // temp->next = head;
        }
        // temp->next = head;
        printf("do want to continue (0/1) ? \n");
        scanf("%d", &choice);
        temp->next = head;
    }
}

void display()
{
    struct node *temp;
    temp = head;
    while (temp->next!= head)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}

void main()
{
    create();
    display();
}