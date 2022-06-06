#include<iostream>
using namespace std;

class Node
{
    public:
     int data;
     Node* next;
     Node* prev;
};

void printlist(Node* node)
{
    Node* last;
    cout<<"\nTraversal in the forward direction:";
    while(node!=NULL)
    {
        cout<<" "<<node->data<<" ";
        last=node;
        node=node->next;
    }
    cout<<"\nTraversal in the backward direction:";
    while(last!=NULL)
    {
        cout<<" "<<last->data<<" ";
        last=last->prev;
    }
}

void push(Node** head_ref,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    new_node->prev=NULL;

    if((*head_ref) != NULL)
        (*head_ref)->prev=new_node;

    (*head_ref)=new_node;    
}

int main()
{
    Node* head=NULL;
    push(&head,8);
    push(&head,6);
    push(&head,4);
    push(&head,2);

    printlist(head);


    return 0;
}

