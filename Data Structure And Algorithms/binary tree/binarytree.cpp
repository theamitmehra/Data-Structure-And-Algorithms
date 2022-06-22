#include<iostream>
#include<queue>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

node* BuildTree(node* root){        //recursive method
    cout<<"enter the data : "<<endl;

    int data ;
    cin>>data;

    root = new node(data);

    if (data == -1)                //base case
    {
        return  NULL;
    }

    cout<< "enter data for inserting in left of "<<data<<endl;
    root->left = BuildTree(root->left);

    cout<< "enter data for inserting in right of "<<data<<endl;
    root->right = BuildTree(root->right);
    return root;                  //
 
    
}

void levelOrdertravesal(node* root){       //breadth first traversal
    queue<node* > q;

    q.push(root);
    q.push(NULL);


    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if (temp  == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }else
        {

            cout<<temp->data<<" ";
            if (temp->left)
        {
            q.push(temp->left);

        }

        if (temp->right)
        {
            q.push(temp->right);
        }
        
        
        }

    }
    
}

void inOrder(node* root){            // L N R  where l = left, n = node, and r = right
    if (root == NULL)
    {
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

    
}


void preOrder(node* root){            // L N R  where l = left, n = node, and r = right
    if (root == NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

    
}


void postOrder(node* root){            // L N R  where l = left, n = node, and r = right
    if (root == NULL)
    {
        return ;
    }

    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    
}


void bulidFromlevelorder(node* &root){

    queue<node*> q;
    
    cout<<"enter data for root"<<endl;
    int data;
    

    cin>>data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
            
        }

        cout<<"enter right node for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
            
        }
        
    }
    



}

int main(){

    node* root = NULL;

    bulidFromlevelorder(root);

    cout<<endl<<"binary tree is: "<<endl;
    levelOrdertravesal(root);

    //root = BuildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
/*
    cout<<"level order/ breadth first traversal ";
    levelOrdertravesal(root);
*/
    cout<<"inOrder traversal ";
    inOrder(root);

    cout<<endl;
    cout<<"preorder traversal ";;

    preOrder(root);
    cout<<endl;

    cout<<"postOrder traversal ";

    postOrder(root);



    return 0;
    
}