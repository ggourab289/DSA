#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node* lchild;
    int data;
    struct Node* rchild;
}*root=NULL;

void insert(int key)
{
    struct Node* t=root;
    struct Node* p;
    struct Node* r;

    if(root==NULL)
    {
        p=(struct Node*)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;

    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
          t=t->lchild;
        else if(key>t->data)
           t=t->rchild;
        else 
          return;    
    }

    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;

    if(key<r->data)r->lchild=p;
    else r->rchild=p;
}

void inorder(struct Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

int main()
{
    insert(5);
    insert(1);
    insert(2);
    insert(6);
    insert(7);
    insert(3);
    insert(9);
    insert(10);

    inorder(root);
    cout<<endl;
    return 0;
}