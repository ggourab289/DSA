#include<bits/stdc++.h>
using namespace std;

void print(queue<int> &q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}
void reversequeue(int k,queue<int> &q)
{
    if(q.empty()==true || k>q.size() || k<=0)
       return;
    stack<int>Stack;

    for(int i=0;i<k;i++)
    {
        Stack.push(q.front());
        q.pop();
    }
    while(!Stack.empty())
    {
        q.push(Stack.top());
        Stack.pop();
    }

    for(int i=0;i<q.size()-k ;i++)
    {
        q.push(q.front());
        q.pop();
    }

}




int main()
{
    queue<int> Queue;

    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    Queue.push(60);
    Queue.push(70);
    Queue.push(80);
    Queue.push(90);

    int k=5;

    reversequeue(k,Queue);
    print(Queue);

}