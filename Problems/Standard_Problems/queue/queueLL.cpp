#include <iostream>
using namespace std;

struct queuenode
{
    int data;
    queuenode *next;
    // constructor
    queuenode(int d)
    {
        data = d;
        next = NULL;
    }
};

queuenode *front = NULL, *rear = NULL;

struct queue
{
    int size = 0;

    int enqueue(int x)
    {
        // creating a node (newnode)
        queuenode *newnode = new queuenode(x);
        newnode->next = NULL;

        if (newnode == NULL)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            if (front == 0 && rear == 0)
            {
                front = newnode;
                rear = newnode;
            }
            else
            {
                rear->next = newnode;
                rear = newnode;
            }
            cout << x << " inserted into the queue" << endl;
            size++;
        }
    }

    int dequeue()
    {
        if (front == NULL)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout<<front->data <<" Removed From Queue"<<endl;
            queuenode *temp = front;
            front = front->next;
            delete temp;
            size--;
        }
    }

    bool empty()
    {
        return front = NULL;
    }

    void peek()
    {
        if (front == 0 && rear == 0)
        {
            cout << "Queue is Empty" << endl;
            // return -1;
        }
        else
            cout << front->data << endl;
    }

    void display()
    {
        if (front == 0 && rear == 0)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            queuenode *temp = front;
            // temp = front;

            while (temp != 0)
            {
                cout << temp->data << " ";
                temp = temp->next;
                cout << endl;
            }
        }
    }
};

int main()
{

    queue q;
    q.enqueue(5);
    q.enqueue(0);
    q.enqueue(-3);
    cout << endl;
    q.display();
    cout << endl;
    q.dequeue();
    // q.display();
    q.peek();
    cout << endl;
    q.display();

    return 0;
}
