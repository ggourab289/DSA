/*search an alement in a given linked list*/
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
 bool check(Node* head_ref,int key)
 {
     Node* ptr=head_ref;
     while(ptr!=NULL)
     {
         if(ptr->data==key)
             return true;
         else
             ptr=ptr->next;     
     }
     return false;

 }     
      
      

 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);
   
     int n;
     cout<<"enter the element which to be searched"<<endl;
     cin>>n;


     

     if(check(head,n)==true)
        cout<<" present"<<endl;
     else
        cout<<" not present" ;   
    return 0;
 }