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
    struct Node* current =node;
    while(current && current->left != NULL)
         current=current->left;
    return current;     
}

void Insert(int key)
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
        if(key < t->data)
            t=t->left;
        else if(key> t->data)
            t=t->right;
        else
            return;        
    }
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->left=p->right=NULL;

    if(key< r->data) r->left=p;
    else r->right=p;
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

int main()
{
    Insert(8);
    Insert(4);
    Insert(9);
    Insert(5);
    Insert(12);
    Insert(3);
    Insert(20);
    Insert(7);
    Insert(55);

    cout<<"inorder traversal :";
    inorder(root);
    cout<<endl;

    root=deleteNode(root,9);
    cout<<"inorder traversal :";
    inorder(root);
    cout<<endl;


    root=deleteNode(root,5);
    cout<<"inorder traversal :";
    inorder(root);
    cout<<endl;

    root=deleteNode(root,7);
    cout<<"inorder traversal :";
    inorder(root);
    cout<<endl;

    return 0;

}