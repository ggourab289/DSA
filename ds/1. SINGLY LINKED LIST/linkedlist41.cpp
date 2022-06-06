/*inserting a node at a given position*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
      int data;
      Node* next;
};

void add_at_pos(Node* head_ref,int pos,int new_data)
{   
    Node* ptr=head_ref;
    Node* new_node=new Node();
    new_node->data=new_data;
    


}

void printlist(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{

}