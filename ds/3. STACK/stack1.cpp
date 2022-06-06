/* implementing stack using array */
#include<iostream>
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
             for(int i=0;i<5;i++)
             {
                 arr[i]=0;
             }
         }
         bool isEmpty();
         bool isFull();
         void push(int val);
         int pop();
         int count();
         int peek(int pos);
         void change(int pos ,int val);
         void display();
};         

         bool stack::isEmpty()
         {
             if(top==-1)
                 return true;
              else
                 return false;   

         }

         bool stack::isFull()
         {
             if(top==4)
                return true;
             else 
                return false;   
         }

         void stack::push(int val)
         {
             if(isFull())
               {
                   cout<<"stack overflow"<<endl;
               }
              else
                {
                    top++;
                    arr[top]=val;
                } 
         }

         int stack::pop()
         {
             if(isEmpty())
             {
                 cout<<"stack underflow"<<endl;
                 return 0;
             }
             else
             {
                 int popvalue=arr[top];
                 arr[top]=0;
                 top--;
                 return popvalue;
             }
         }

         int stack::count()
         {
             return (top+1);
         }

         int stack::peek(int pos)
         {
             if(isEmpty())
             {
                 cout<<"stack underflow"<<endl;
                 return 0;
             }
             else
              {
                  return arr[pos];
              }
         }

         void stack::change(int pos,int val)
         {
             arr[pos]=val;
             cout<<"value changed at the location"<<pos<<endl;
         }

         void stack::display()
         {
             cout<<"all values in the stack are :"<<endl;
             for(int i=4;i>=0;i++)
             {
                 cout<<arr[i]<<endl;
             }
         }


int main()
{
    class stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);

    s.display();

    cout<<s.pop()<<"popped from the stack"<<endl;

    s.display();
}