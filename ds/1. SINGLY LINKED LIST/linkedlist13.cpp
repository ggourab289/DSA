/*find middle of a given linked list */
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
 void check(Node* head_ref)
 {
     Node* ptr=head_ref;
     int len=0,i;
     while(ptr!=NULL)
     {
         ptr=ptr->next;
         len++;
     }
     for(i=1;i<=(len+1)/2;i++)
     {
         ptr=ptr->next;
     }
     cout<<ptr->data;
     
    

 }     
      
      

 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);
     insert(&head,1);
   

    check(head);  
    return 0;
 }