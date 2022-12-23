#include <stdio.h>
#include <stdlib.h>

// creating our own data type
// by writing this the node is not been created
struct node
{
    int data;
    struct node *next;
};

struct node *length_ll(struct node *head)
{
    int count = 0;
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("the length of the linked list is: %d", count);

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


    head = length_ll(head);

    printf("\n");
    printf("the linked list is as follows: \n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        // count++;s
    }
    // getc();
    // printf("count is: %d", count);
}
