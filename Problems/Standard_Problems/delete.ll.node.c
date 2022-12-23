#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// delete the first node from the linkedlist
struct node * delete_at_node(struct node *head)
{
    struct node *temp, *nextnode;
    int pos,i=1;
    temp = head;
    printf("enter the pos: \n");
    scanf("%d", &pos);
    while(i<pos-1)
    {
        temp=temp->next; 
        i++;
    }
    nextnode=temp->next;
    temp->next = nextnode->next;
    free(nextnode);

    return head;
}
void main()
{
    struct node *head, *newnode, *tmp;
    head = 0;
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data that you want to enter: \n");
        scanf("%d", &newnode->data);
        newnode->next=NULL;

        if (head == 0)
        {
            head = tmp =newnode;
        }
        else
        {
            tmp->next = newnode;
            tmp = newnode;
        }
        printf("do want to continue (0/1) ? \n");
        scanf("%d", &choice);
    }

    head = delete_at_node(head);

    printf("\n");
    tmp = head;
    while (tmp != 0)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
}