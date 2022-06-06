#include<iostream>
using namespace std;

class Queue
{
    private:
      int front;
      int rear;
      int arr[5];
    public:
        Queue()
        {
            front=-1;
            rear=-1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }
        bool isEmpty()
        {
            if(front==-1 && rear==-1)
               return true;
            else  
               return false;   
        }
        bool isFull()
        {
            if(rear==4)
               return true;
            else
               return false;   
        }
        void enqueue(int val)
        {
            if(isFull())
            {
                cout<<"the queue is full"<<endl;
                return;
            }
            else if(isEmpty())
            {
                rear=0;
                front=0;
                arr[rear]=val;
            }
            else
            {
                rear++;
                arr[rear]=val;
            }
        }
        int dequeue()
        {
            int x;
            if(isEmpty())
            {
                cout<<"the queue is empty"<<endl;
                return 0;
            }
            else if(front == rear)
            {
                x=arr[front];
                arr[front]=0;
                rear=-1;
                front=-1;
                return x;
            }
            else
            {
                x=arr[front];
                arr[front]=0;
                front++;
                return x;
            }
        }
        int count()
        {
            return (rear-front+1);
        }
        void display()
        {
            cout<<"all the values in the queue are :"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<arr[i]<<" ";
            }
        }


};

int main()
{
        Queue q1;
        int option,value;

    do
    {   

        cout<<"enter option number,enter 0 to exit:"<<endl;
        cout<<"1. Enqueue()"<<endl;
        cout<<"2. Dequeue()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. display()"<<endl;
        cout<<""<<endl;


        cin>>option;
        
        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"Enque operation"<<endl;
                cin>>value;
                q1.enqueue(value);
                break;
            case 2:
                cout<<"Dequeue operation:"<<q1.dequeue()<<endl;
                break;
            case 3:
                if(q1.isEmpty())
                   cout<<"the queue is empty"<<endl;
                else
                   cout<<"the queue is not empty"<<endl;   
                break;
            case 4:
                if(q1.isFull())
                   cout<<"the queue is full"<<endl;
                else
                   cout<<"the queue is not full"<<endl;   
                break;
            case 5:
                cout<<"count operation \nthe count of the queue is:"<<q1.count()<<endl;
                break;
            case 6:
                q1.display();
                break;
            default:
                cout<<"enter proper option number:"<<endl;
                break;    
                                           
        }
            
        
    } while(option != 0);

    return 0;
    
    
}