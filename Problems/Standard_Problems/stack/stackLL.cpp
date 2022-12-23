// implementing queue using linked list in cpp
#include <iostream>
using namespace std;

struct stackNode
{
    int data;
    stackNode *next;
    int size;
    stackNode(int d)
    {
        data = d;
        next = NULL;
    }
};
struct stack
{
    stackNode *top;
    int size;
    stack()
    {
        top = NULL;
        size = 0;
    }
    void stackPush(int x)
    {
        stackNode *element = new stackNode(x);
        element->next = top;
        top = element;
        cout << "Element pushed"
             << "\n";
        size++;
    }
    int stackPop()
    {
        if (top == NULL)
        {
            return -1;
        }
        int topData = top->data;
        stackNode *temp = top;
        top = top->next;
        delete temp;
        size--;
        return topData;
    }
    int stackSize()
    {
        return size;
    }
    bool stackIsEmpty()
    {
        return top == NULL;
    }
    int stackPeek()
    {
        if (top == NULL)
            return -1;
        return top->data;
    }
    void printStack()
    {
        stackNode *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    stack s;
    s.stackPush(2);
    s.stackPush(3);
    s.stackPush(10);
    s.printStack();
    cout << endl;
    // s.stackPop();
    // s.stackPeek();
    // s.stackSize();
    cout << s.stackPop() << "\n";
    cout << "Stack size: " << s.stackSize() << "\n";
    cout << "Stack empty or not? " << s.stackIsEmpty() << "\n";
    cout << "stack's top element: " << s.stackPeek() << "\n";
    return 0;
}