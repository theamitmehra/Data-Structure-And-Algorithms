#include <iostream>
using namespace std;

// implementing stack using linked list

class node
{

public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
        ;
    }
};

void push(node *&top, int val)
{

    if (top == NULL)
    {
        node *temp = new node(val);
        top = temp;
    }
    else
    {

        node *temp = new node(val);
        temp->next = top;
        top = temp;
    }
}

int peek(node *top)
{

    int peek = top->data;

    return peek;
}

void pop(node *&top)
{

    if (top == NULL)
    {
        cout << "sstack is empty" << endl;
    }
    else
    {

        node *temp = top;
        top = top->next;
        temp->next = NULL;
        delete temp;
    }
}
int main()
{

    node *top = new node(9);

    push(top, 4);
    push(top, 5);

    push(top, 0);

    pop(top);

    node *temp = top;
    cout << "stack \n";
    while (temp != NULL)
    {
        cout << temp->data<<" " ;
        temp = temp->next;
    }
    cout << endl;
}
