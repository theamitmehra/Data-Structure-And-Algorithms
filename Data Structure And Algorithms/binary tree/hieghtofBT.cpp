#include<iostream>
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

int height(node* node){

    if (node == NULL)
    {
        return 0;
    }

    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left, right) +1;
    return ans;
    
}

int main(){

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<height(root);
    return 0;


}