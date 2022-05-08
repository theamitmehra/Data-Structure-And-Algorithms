#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }

};


void push(Node* &head, int val){

    if (head == NULL)
    {
        Node* newnode = new Node(val);
        head = newnode;
    }

    Node* newnode = new Node(val);
    newnode->next = head;
    newnode->next->prev = newnode;
    head = newnode;
    
}

void append(Node* &head, int val){
    if (head == NULL)
    {
        Node* newnode = new Node(val);
        head = newnode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    Node* newnode = new Node(val);
    temp->next = newnode;
    temp->next->prev = temp;

}

void insertAtPosition(Node* head, int position, int val){

    if (head == NULL)
    {
        cout<<"incorrect input"<<endl;
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count < position-1)
    {
        temp = temp->next;
        count++;

    }

    Node* newnode= new Node(val);
    newnode->next = temp->next;

    temp->next = newnode;

    temp->next->prev = temp;

}

void deleteNODE(Node* &head, int position){

    if (position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;        

    }

    Node* temp = head;
    int count = 1;
    while (count< position-1)
    {
        temp = temp->next;
        count++;
    }
    Node * nodetodel = temp->next;
    temp->next = nodetodel->next;
    temp->next->prev = temp;

    nodetodel->next = NULL;
    nodetodel->prev = NULL;


    delete nodetodel;

    
}

void print(Node* head){
    cout<<"NULL<-";
    for (Node* temp = head; temp != NULL; temp = temp->next)
    {
        cout<<"->" <<temp->data<<"<-";

    }
    cout<<"->NULL"<<endl;
    
}

int getlength(Node* head){

    if (head == NULL)
    {
        return 0;
    }
    
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next ;
        count++;
    }
    return count;
}

bool isempty(Node * head){
    if (head == NULL)
    {
        return 1;
    }

    return false;
    
}
int main(){

/*
Node* head = new Node(5);
push(head, 56);
push(head, 9);
append(head, 89);
append(head, 41);

insertAtPosition(head, 3, 78);
print(head);

deleteNODE(head, 4);
print(head);

cout<<getlength(head);

*/
Node* head = new Node(45);
push(head, 5);

append(head, 89);
insertAtPosition(head, 2, 8);

deleteNODE(head, 3);


print(head);

return 0;
}