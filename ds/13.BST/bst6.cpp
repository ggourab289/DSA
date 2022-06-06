#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node* left;
    int data;
    struct Node* right;
}*root=NULL;

struct Node* minvalueNode(struct Node* node)
{
    struct Node* current=node;
    while(current && current->left!=NULL)
       current=current->left;
    return current;   
}

void insert(int key)
{
    struct Node* t=root;
    struct Node* p;
    struct Node* r;

    if(root==NULL)
    {
        p=(struct Node*)malloc(sizeof(struct Node));
        p->data=key;
        p->left=p->right=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
          t=t->left;
        else if(key>t->data)
          t=t->right;
        else
          return;    
    }

    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->left=p->right=NULL;

    if(key<r->data) r->left=p;
    else r->right=p;
}

struct Node* deleteNode(struct Node* r,int key)
{
    if(r==NULL)
      return r;
    else if(key<r->data)
       r->left=deleteNode(r->left,key);
    else if(key>r->data)
       r->right=deleteNode(r->right,key);
    else
     {
         if(r->left==NULL)
         {
             struct Node* temp=r->right;
             free(r);
             return temp;
         }
         else if(r->right==NULL)
         {
             struct Node* temp=r->left;
             free(r);
             return temp;
         }
         else
         {
             struct Node* temp=minvalueNode(r->right);
             r->data=temp->data;
             r->right=deleteNode(r->right,temp->data);
         }
     }  
     return r;      
}

void inorder(struct Node* p)
{
    if(p)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}

int main()
{
    insert(10);
    insert(15);
    insert(5);
    insert(12);
    insert(1);
    insert(7);
    insert(19);
    

    cout<<"1st traversal";
    inorder(root);
    cout<<endl;
    
    root=deleteNode(root,1);
    cout<<"2nd traversal";
    inorder(root);
    cout<<endl;

    root=deleteNode(root,7);
    cout<<"3rd traversal";
    inorder(root);
    cout<<endl;

    root=deleteNode(root,12);
    cout<<"4th traversal";
    inorder(root);
    cout<<endl;

    return 0;



}