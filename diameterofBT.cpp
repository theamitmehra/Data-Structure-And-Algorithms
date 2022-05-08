#include <iostream>
using namespace std;
// diameter of tree (also called width)longest path b/w leaf and root

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

int height(node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int diameter(node *root)
{

    if (root == NULL)
        return 0;

    int op1 = diameter(root->right);
    int op2 = diameter(root->left);
    int op3 = height(root->left) +  height(root->right) +1;

    int ans = max(op1, max(op2, op3));
    return ans;
}

pair<int, int> diameterFast(node* root){

    if(root == NULL){ 
        
        pair<int, int> p = make_pair(0,0);
        return p;
        
    }

    pair<int, int > left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;

    int op3 = left.second + right.second +1;

    pair<int, int> ans;
    ans.first  = max(op1, max(op2, op3));

    ans.second = max(left.second, right.second)  +1;

    return ans;


}

int solve(node* root){
    return diameterFast(root).first;
}
int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<diameter(root);
    cout<<solve(root);
    return 0;
}