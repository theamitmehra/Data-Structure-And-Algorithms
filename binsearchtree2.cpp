#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *left, *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *insertBST(node *root, int val)
{

    node *temp1 = root;
    node *temp2 = NULL;
    while (temp1 != NULL)
    {
        temp2 = temp1;
        if (val < temp1->data)
        {
            temp1 = temp1->left;
        }
        else
        {
            temp1 = temp1->right;
        }
    }
    if (temp2 == NULL)
    {
        return new node(val);
    }

    if (val < temp2->data)
    {
        temp2->left = new node(val);
    }
    else
    {
        temp2->right = new node(val);
    }
    return temp2;
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

int main()
{

    node *root = NULL;

    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inorder(root);
    cout << endl;

    cout << "hello world" << endl;

    return 0;
}