/*inserting a node at the front*/
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
      int data;
      Node* next;
};

void push(Node** head_ref,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void printlist(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node* head=new Node();
    head->data=13;
    head->next=NULL;

    Node* ptr=new Node();
    ptr->data=56;
    ptr->next=NULL;

    head->next=ptr;
    
    int data=34;
    push(&head,data);

    printlist(head);

    return 0;
}