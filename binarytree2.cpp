#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {

        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct node *root)
{ // NLR

    if (root == NULL)
    {

        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{ // LNR

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(struct node *root)
{ // LRN

    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// void printlevelorder(node* root){                          // using queue
//     if(root == NULL){
//             return;}

//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         node* Node = q.front();
//         q.pop();
//     if(Node != NULL){
//         cout<<Node->data<<" ";

//         if (Node->left)
//             q.push(Node->left);

//         if (Node->right)
//             q.push(Node->right);

//     if (!q.empty())

//         q.push(NULL);
//     }

//     else if (!q.empty()){
//       q.push(NULL);
//     }
// }

// }

int main()
{

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    
    
    cout<<"preorder ";
    preorder(root);
    cout << endl;
    cout<<"inorder "; 
    inorder(root);
    cout << endl;
    cout<<"postorder "; 
    postorder(root);

    // printlevelorder(root);
    return 0;
}