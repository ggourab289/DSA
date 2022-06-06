/* implementing stack using array*/

#include<bits/stdc++.h>
using namespace std;

class stack
{
    private:
      int top;
      int arr[5];
    public:
         stack()
         {
             top=-1;
             for(int i=0;i<4;i++)
             {
                 arr[i]=0;
             }
         };

         bool isEmpty();
         bool isFull();
         void push(int val);
         int  pop();
         void display();
};

      bool stack::isEmpty()
      {
         
      }

 