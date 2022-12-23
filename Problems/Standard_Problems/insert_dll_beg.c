#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail;
int count=0;

// finding the length of the linked list
void length_ll()
{
    // int count = 0;
    // struct node *tail;
    tail = head;
    while (tail != 0)
    {
        count++;
        tail = tail->next;
    }
    printf("the length of the linked list is: %d", count);

}
// creating a node that is to be inserted
void insert_at_beg()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data that u want to add at the start: \n");
    scanf("%d", &newnode->data);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insert_at_end()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof (struct node));
    printf("enter the data that you want to add at the end: \n");
    scanf("%d", &newnode->data);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_pos()
{
    int pos,i=1;
    printf("enter the position: \n");
    scanf("%d", &pos);
    if (pos<1)
    {
        printf("invalid position \n");
    }
    else if(pos==1){
        insert_at_beg();
    }
    else{
        struct node *newnode, *temp;
        temp = head;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data that you want to add at a pos: \n");
        scanf("%d", &newnode->data);
        while(i<pos-1)
        {
             temp = temp->next;
             i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}


// creating a linked list
void create()
{
    struct node *newnode;
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
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("do want to continue (0/1) ? \n");
        scanf("%d", &choice);
    }
}

void display()
{
    struct node *tail;
    tail = head;
    while (tail != 0)
    {
        printf("%d\t", tail->data);
        tail = tail->next;
    }
}

void main()
{
    create();
    insert_at_beg(); 
    insert_at_end();
    insert_at_pos();
    display();
}