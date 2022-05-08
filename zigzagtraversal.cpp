#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *right, *left;

    node(int d){
        data = d;
        right = NULL;
        left = NULL;
    }
};

vector<int> zigzagTraversal(node *root)
{

    vector<int> result;     //ek vector banaya hai jise return krege

    // base case

    if (root == NULL)
    {
        return result;
    }

    queue<node *> q;      //ek queue banayi hai jisme store krege
    q.push(root);

    bool lefttoright = true;

    while (!q.empty())
    {

        int size = q.size();

        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            node *frontNode = q.front();

            q.pop();

            int index = lefttoright ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
                q.push(frontNode->left);

            if (frontNode->right)
                q.push(frontNode->right);
        }

        // direction change karni hai

        lefttoright = !lefttoright;

        for (auto i : ans)
        {
            result.push_back(i);
        }
    }

    return result;
}

int main(){

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    vector<int> ans;

    ans = zigzagTraversal(root);

    int count = ans.size();
    for (int i = 0; i <count ; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
     


}