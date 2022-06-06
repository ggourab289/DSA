/* inorder predecessor and successor */

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left ;
    struct Node* right;
}

void findPreSuc(Node* root, Node*& pre,Node*& suc,int  key)
{
   if(root==NULL) return;

   if(root->data==key)
   {
       if()
   }
}

Node* newNode(int item)
{
    Node* temp= new Node;
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}

Node* insert(Node* node,int key)
{
    if(node==NULL) return newNode(key);
    if(key<node->data)
       node->left=insert(node->left,key);
    else
       node->right=insert(node->right,key);
    return node;      
}

int main()
{

}