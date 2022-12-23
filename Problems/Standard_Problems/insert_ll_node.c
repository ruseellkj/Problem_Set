#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_after_node(struct node *head)
{
    // create a new node
    int i = 1, pos, count = 0;
    struct node *temp, *newnode;
    // if (temp = NULL)
    // {
    //     printf("the given previous node cannot be NULL");
    // }
    // newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the position: \n");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("invalid position ");
    }
    else
    {
        temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data that u want to enter: \n");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;

        return temp;
    }

    // return temp;
}

void main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1, count = 0;
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

    temp = insert_after_node(head);

    printf("\n");
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("count is %d", count);
}