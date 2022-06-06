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
        node=node->next;
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

void delete_first(Node** head_ref)
{
    Node* temp=(*head_ref)->next;
    free(*head_ref);
    (*head_ref)=temp;
}
void delete_last(Node* head_ref)
{
    Node* temp1=head_ref;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    Node* temp2=temp1->prev;
    free(temp1);
    temp2->next=NULL;
}

int main()
{ 
    Node* head=NULL;
    push(&head,8);
    push(&head,6);
    push(&head,4);
    push(&head,2);

    printlist(head);

    delete_first(&head);

    printlist(head);

    delete_last(head);

    printlist(head);


    return 0;
}

