#include<iostream>
using namespace std;

//binary search tree



struct node
{
    int data;
    node *left,  *right;   

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    } 

};

node* insertBST(struct node* root, int val){

    if(root == NULL){
        return new node(val);
    }

    if(val < root->data){

        root->left = insertBST(root->left , val);}
    else{
        root->right = insertBST(root->right, val);}


        return root;
}

void preorder(struct node* root){  // NLR

    if(root == NULL){

        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node* root){  //LNR

    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct node* root){  //LRN

    if(root == NULL){
        return;
    }

    postorder(root->left);   
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

     node* root = NULL;

     root = insertBST(root, 5);
     insertBST(root, 1);
     insertBST(root, 3);
     insertBST(root, 4);
     insertBST(root, 2);
     insertBST(root, 7);

     inorder(root);
     cout<<endl;

     preorder(root);

     cout<<endl;

     postorder(root);


     
    return 0;
}