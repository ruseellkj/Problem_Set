#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * insert_beginning(struct node *head)
{
    // create a new node
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data that u want to enter: \n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;

    return head;
}

void main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data that u want to enter: \n");
        scanf("%d", &newnode->data);
        newnode->next;

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

    head = insert_beginning(head);

    printf("\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}