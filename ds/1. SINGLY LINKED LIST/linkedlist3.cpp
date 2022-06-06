 /* linked list insertion at the front */
 
 #include<iostream> 
 using namespace std;

 class Node
 {
     public:
      int data;
      Node* next;
 };
 
 void push(Node** head_ref,int new_data)
 {
     Node* new_node=new Node();
     new_node->data=new_data;
     new_node->next=(*head_ref);
     (*head_ref)=new_node;
 }

 int main()
 {
     Node* head=new Node();
     head->data=45;
     head->next=NULL;

     Node* ptr=new Node();
     ptr->data=98;
     ptr->next=NULL;

     head->next=ptr;

     int data=3;

     push(&head,data);
     ptr=head;
     while(ptr!=NULL)
     {
         cout<<ptr->data<<" ";
         ptr=ptr->next;
     }

     return 0;
 }