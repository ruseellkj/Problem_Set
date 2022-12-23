#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};

// delete the first node from the linkedlist
struct node * delete_at_end(struct node *head)
{
    struct node *tmp, *prevnode;
    if (head == 0)
    {
        printf("can't delete the node from the list \n");
    }
    else
    {
        // the address of frist node is stored in pointer temp
        tmp = head;
        while(tmp->nxt!=0)
        {
            prevnode = tmp;
            tmp = tmp->nxt;
        }
        if(tmp == head)
        {
            head =0;
            // free(tmp);
        }
        else{
            prevnode->nxt=NULL;
            // free(tmp);
        }
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

    head = delete_at_end(head);

    printf("\n");
    tmp = head;
    while (tmp != 0)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->nxt;
    }
}