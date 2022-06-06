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

 void delete_pos(Node** head_ref,int pos)
 {
     Node* prev=(*head_ref);
     Node* curr=(*head_ref);
     if(pos==1)
     {
         (*head_ref)=curr->next;
         free(curr);
         curr=NULL;
     }
     else
     {
         while(pos!=1)
         {
             prev=curr;
             curr=curr->next;
             pos--;
         }
         prev->next=curr->next;
         free(curr);
         curr=NULL;
     }
     
 }
 

 int main()
 {
     Node* head=NULL;
     insert(&head,8);
     insert(&head,6);
     insert(&head,4);
     insert(&head,2);

     int n;
     cout<<"enter the position:"<<endl;
     cin>>n;
     delete_pos(&head,n);
     Node* ptr=head;
     while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;

     
 }