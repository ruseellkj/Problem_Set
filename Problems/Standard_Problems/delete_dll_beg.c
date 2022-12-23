#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *tail;


void delete_from_beg()
{
    struct node *temp;
    if(head == 0)
    {
        printf("the list is empty \n");

    }
    else{
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);

    }
    // free(temp);
}

void delete_from_end()
{
    struct node *temp;
    if(tail == 0)
    {
        printf("the list is empty \n");
    }
    else{
        temp = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        free(temp);
    }
      

}


void delete_from_pos()
{
    int pos, i=1;
    printf("enter the position \n");
    scanf("%d", &pos);
    struct node *temp;
    temp = head;
    if(pos == 1)
    {
        delete_from_beg();
    }
    else
    {
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    // free(temp);
}
void create()
{
    struct node *temp ,*newnode;
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
    display();
    delete_from_beg();
    delete_from_end();
    delete_from_pos();
}