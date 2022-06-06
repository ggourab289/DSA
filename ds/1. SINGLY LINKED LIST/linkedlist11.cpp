/*nth index element*/
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
 int getNth(Node* head_ref,int index)
 {
     Node* ptr=head_ref;
     int  count=0;
     while(ptr!=NULL)
     {
         if(count==index)
             return (ptr->data);
        
         count++;
         ptr=ptr->next;     
     }
     assert(0);

 }     
      
      

 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);
   
     int n,r;
     cout<<"enter the index which to be searched"<<endl;
     cin>>n;
     r=getNth(head,n);
     cout<<r; 

    return 0;
 }