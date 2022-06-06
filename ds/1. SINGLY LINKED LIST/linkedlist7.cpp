#include<iostream>
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
      
      
      
 void delete_all(Node* head_ref)
 {
     Node* temp=head_ref;
     while(temp!=NULL)
     {
         temp=temp->next;
         free(head_ref);
         head_ref=temp;
     }
     if(head_ref==NULL)
    {
        cout<<"this linked list is deleted"<<endl;
        
    }
     
 }
 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);

     delete_all(head);
    return 0;
 }