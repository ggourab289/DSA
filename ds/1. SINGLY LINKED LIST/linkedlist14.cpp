/*reverse a linked list*/

#include<iostream>
#include<cassert>
using namespace std;
 class Node
 {
     public:
      int data ;
      Node* next;
 };

 void insert(Node** head_ref,int new_data)
 {
      Node* new_node=new Node();
      new_node->data=new_data;
      new_node->next=(*head_ref);
      (*head_ref)=new_node;
 }
 Node* rev(Node* head_ref)
 {
     Node* temp1=NULL;
     Node* temp2=NULL;
     while(head_ref != NULL)
     {
        temp2=head_ref->next;
        head_ref->next=temp1;
        temp1=head_ref;
        head_ref=temp2;

     }
     head_ref=temp1;
     return head_ref;

 }     
      
      

 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);

     
     head=rev(head);

     Node* ptr=head;
     while(ptr!=NULL)
     {
         cout<<ptr->data<<" ";
         ptr=ptr->next;
     }

    return 0;
 }
