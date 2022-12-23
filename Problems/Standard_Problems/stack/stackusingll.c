// implementing queue using linked list in C
#include <stdio.h>
#include <stdlib.h>

struct stacknode
{
    int data;
    struct stacknode *next;
};

struct stacknode *top = 0;

void stackpush(int x)
{
    struct stacknode *newnode;
    newnode = (struct stacknode *)malloc(sizeof(struct stacknode));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void stackdisplay()
{
    struct stacknode *temp;
    temp = top;
    if (top == NULL)
    {
        printf("The stack is empty \n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            // printf("\n");
            temp = temp->next;
        }
    }
}

void stackTop()
{
    if (top == NULL)
    {
        printf("the stack is empty \n");
    }
    else
    {
        printf("the top element of the stack is : %d\n", top->data);
    }
}

void stackpop()
{
    struct stacknode *temp;
    temp = top;

    if (top == 0)
    {
        printf("the stack is empty and underflow is caused \n");
    }
    else
    {
        printf("the popped element is: %d\n", temp->data);
        temp = temp->next;
        free(temp);
    }
}

void main()
{
    stackpush(2);
    stackpush(3);
    stackpush(4);
    stackdisplay();
    stackTop();
    stackpop();
    // stackdisplay();
    stackTop();
}