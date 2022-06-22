#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){

        data = d;
        next = NULL;

    }
};


void push(node* &tail, int d){

    if (tail == NULL)
    {
        node* tail = new node(d);
        tail->next = tail;

    }

    node* temp = new node(d);
    temp->next = tail->next;
    tail->next =temp;


    
}

void append(node* &tail, int d){
    if (tail == NULL)
    {
        node* tail = new node(d);
        tail->next = tail;

    }
    
        node* temp = new node(d);
        temp->next = tail->next;
        tail->next = temp;

        temp = tail;



}

void insertAtposition(node* &tail, int position, int d){

    if (position == 1)
    {
        push(tail, d);
        return;
    }

    node * nodetoinsert = new node(d);

    node* temp = tail->next;

    int count = 1;

    while (count<position -1)
    {
        temp = temp->next;
        count++;

    }

    if (temp == tail)
    {
        append(tail, d);
        return;
    }
    
    
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}




int main(){

    node* tail = new node(9);
    push(tail, 8);
    push(tail, 10);

   

    print(tail);
    return 0;
}