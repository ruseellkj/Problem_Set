// implementing queue using array(circular)
#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front, rear, maxsize;
    int count = 0;

public:

    // constructor
    Queue()
    {
        front= -1;
        rear = -1;
        arr = new int[16];
        count = 0;
    }

    // parameterized constructor
    Queue(int maxsize){
        this->maxsize = maxsize;
        arr = new int[maxsize];
        front = -1;
        rear = -1;
        count = 0;
    }


    // member functions
    void enqueue(int x)
    {
        if (count == maxsize)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear % maxsize] = x;
            rear++;
            count++;
        }
    }

    int dequeue()
    {
        if (count == 0)
        {
            return -1;
        }
        else
        {
            arr[front % maxsize] = -1;
            front++;
            count--;
        }
    }

    int Top()
    {
        if (count == 0)
        {
            return -1;
        }
        else
        {
            return arr[front % maxsize];
        }
    }

    int Size()
    {
        return count;
    }

    void display()
    {
        for (int i = 0; i < rear - 1; i++)
        {
            cout << (arr[i  % maxsize]) << endl;
        }
    }
}; 

int main()
{
    Queue q;
    q.enqueue(4);
    q.enqueue(14);
    q.enqueue(24);
    q.enqueue(34);
    cout << "The peek of the queue before deleting any element " << q.Top() << endl;
    cout << "The size of the queue before deletion " << q.Size() << endl;
    cout << "The first element to be deleted " << q.dequeue() << endl;
    cout << "The peek of the queue after deleting an element " << q.Top() << endl;
    cout << "The size of the queue after deleting an element " << q.Size() << endl;

    return 0;
};