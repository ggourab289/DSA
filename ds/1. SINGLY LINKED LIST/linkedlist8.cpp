/*length of  a linked list using iterative method*/

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
      
      
      

 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);
   
     int count=0;
     Node* ptr=head;
     while(ptr!=NULL)
     { 
         ptr=ptr->next;
         count++;

     }
     cout<<count<<endl;
    return 0;
 }