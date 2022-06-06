#include<iostream>
using namespace std;

class Node
{
    public:
     int data;
     Node* next;
};

void add_to_end(Node* head_ref,int new_data)
{
    Node* ptr1=head_ref;
    Node* ptr2=new Node();
    ptr2->data=new_data;
    ptr2->next=NULL;

    while(ptr1->next != NULL)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=ptr2;
}

int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

     add_to_end(head,67);

     Node* ptr=head;
     while(ptr!=NULL)
     {
         cout<<ptr->data<<" ";
         ptr=ptr->next;
     }

    return 0;
}