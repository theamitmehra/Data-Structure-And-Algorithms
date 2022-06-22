#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{

    if (head == NULL)
    {
        node *temp = new node(val);
        head = temp;
    }
    else
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        node *temp = new node(val);
        head = temp;
    }
    else
    {
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        node *nod = new node(val);
        temp->next = nod;
    }
}

void insertAtposition(node *&head, int position, int val)
{

    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    node *nodetoinsert = new node(val);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(node *head)
{
    cout << "linked list is: ";

    for (node *temp = head; temp != NULL; temp = temp->next)
    {
        cout << temp->data << "->";
    }

    cout << "NULL" << endl;
}

node *findmid(node *head)
{

    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
/*
node* merge(node* left, node* right){

    if(left == NULL){

        return right;
    }

    if (right == NULL)
    {
        return left;
    }

    node* ans = new node(-1);

    node* temp = ans;

    //merge two sorted linked list

    while(left != NULL && right != NULL){

        if (temp->data < right->data)
        {
            temp ->next = left;
            temp = left;
            left= left->next;
        }
        else{
            temp ->next = right;
            temp = right;
            right = right->next;
        }


    }

    while(left != NULL){
         temp ->next = left;
            temp = left;
            left= left->next;
    }

    while(right != NULL){
        temp ->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;

}

node* mergeSort(node* head){

    //base case

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    //break ll in two parts

    node* mid = findmid(head);

    node* left = head;
    node* right = mid->next;

    mid->next = NULL;

    left = mergeSort(left);

    right = mergeSort(right);

    //merge both parts

    node* result = merge(left, right);

    return result;
}*/

node* floydDetectloop(node* head)
{
    if(head == NULL)
    return NULL;

    node* slow = head;
    node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast ->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast ){
            return slow;
        }
    }
    

return NULL;

}

node* unique(node* head){

    if(head == NULL)
    {
    return NULL;
    }

    node* curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data = curr->next->data))
        {
            node* next_next = curr->next->next;
            node* nodetodelete = curr->next;
            delete (nodetodelete);
            curr->next = next_next;
    
        }
        else{
            curr = curr->next;
        }
        
    }
    return head;
}

int main()
{

    node *head = NULL;

    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 3);
    // insertAtTail(head, 5);
    // head->next->next->next->next->next = head->next->next;

    // floydDetectloop(head);


    // print(head);

    // //unique(head);
       

       
    // delete(head->next->next->next);

    // print(head);

    for(int i =0; i<5; i++){
        int val;
        cin>>val;
        insertAtHead(head, val);
    }

    print(head);


    return 0;
}