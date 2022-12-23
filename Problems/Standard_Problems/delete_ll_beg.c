#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};

// delete the first node from the linkedlist
struct node * delete_at_beg(struct node *head)
{
    struct node *tmp;
    if (head == 0)
    {
        printf("cant delete the node from the list \n");
    }
    else
    {
        // the address of frist node is stored in pointer temp
        tmp = head;
        // in head, the address of the next node is stored
        head = head->nxt;
        free(tmp);
    }

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
        newnode->nxt=NULL;

        if (head == 0)
        {
            head = tmp =newnode;
        }
        else
        {
            tmp->nxt = newnode;
            tmp = newnode;
        }
        printf("do want to continue (0/1) ? \n");
        scanf("%d", &choice);
    }

    head = delete_at_beg(head);

    printf("\n");
    tmp = head;
    while (tmp != 0)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->nxt;
    }
}