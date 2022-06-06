
#include<iostream>
using namespace std;

class Node
{
    public:
     int data;
     Node* next;
};

void add_at_pose(Node* head_ref,int new_data,int pos)
{
   Node* ptr=head_ref;
   Node* new_node=new Node();
   new_node->data=new_data;
   new_node->next=NULL;

   pos--;
   while(pos!=1)
   {
       ptr=ptr->next;
       pos--;
   }
   new_node->next=ptr->next;
   ptr->next=new_node;

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

    int data=67;
    int position=3;
    add_at_pose(head,data,position);
    Node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    } 

    return 0;
}