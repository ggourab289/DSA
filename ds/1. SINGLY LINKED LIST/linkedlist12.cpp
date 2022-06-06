/*find nth node from the end*/

#include<iostream>
using namespace std;
 class Node
 {
     public:                                   ////////////////*bug*///////////////////
      int data ;
      Node* next;
 };

 void insert(Node** head_ref,int new_data)
 {
      Node* new_node=new Node();
      new_node->data=new_data;                                    ////////////////*bug*///////////////////
      new_node->next=(*head_ref);
      (*head_ref)=new_node;
 }
  
void print(Node* head_ref,int ind)
 {
    
    Node* ptr=head_ref;
    int len=0,i;                                          ////////////////*bug*///////////////////
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        len++;
    }
    if(len<ind)
      return;


    for(i=1;i<=(len-ind+1);i++)                                            ////////////////*bug*///////////////////
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
     int n;
     cout<<"n=";
     cin>>n;
     print(head,n);
     return 0;
 }