#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){data=val;left=NULL;right=NULL;}
};

int main()
{
    struct Node* root =new Node(1);

    root->left=new Node(3);
    root->right=new Node(6);

    root->left->left=new Node(9);

    cout<<root->left->left->data<<endl;
    
    return 0;
}