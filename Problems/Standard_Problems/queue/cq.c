#include <stdio.h>
#include <stdlib.h>

#define N 5
int front = -1;
int rear = -1;
int queue[N];

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        printf("the queue is full");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("the queue is empty");
    }
    else{
        
    }
}
