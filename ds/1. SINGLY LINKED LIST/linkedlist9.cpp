/*length of  a linked list using recursive method*/

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
      
 int getcount(Node* head_ref)
 {
    
     if(head_ref==NULL)
         return 0;
     else
         return (1+getcount(head_ref->next)); 
 }     
      

 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);
   
     int count;
     count=getcount(head);
     cout<<count<<endl;
    return 0;
 }