#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *next;
};

struct node *head, *tail;

void createcll(){
    struct node *newnode;
    head =0;
    int choice=1;
    while(choice ==1){
        newnode = (struct node* )malloc(sizeof (struct node));
        printf("enter the value of the data: \n");
        scanf("%d", &newnode->data);
        newnode->next=NULL;

        if(head==0){
            head = tail = newnode;
            tail->next = newnode;
        }
        else{
            

        }
    }


}