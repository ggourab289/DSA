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
void interleave(queue<int> &q)
{
    stack<int>S;
    int halfsize=q.size()/2;

    for(int i=0;i<halfsize;i++)
    {
        S.push(q.front());
        q.pop();
    }

    while(!S.empty())
    {
      q.push(S.top());
      S.pop();
    }
    
    for(int i=0;i<halfsize;i++)
    {
       q.push(q.front());
       q.pop();
    }
    
    for(int i=0;i<halfsize;i++)
    {
       S.push(q.front());
       q.pop();
    }

    while(!S.empty())
    {
        q.push(S.top());
        S.pop();
        q.push(q.front());
        q.pop();
    }



}

int main()
{
    queue<int>Queue;

    Queue.push(11);
    Queue.push(12);
    Queue.push(13);
    Queue.push(14);
    Queue.push(15);
    Queue.push(16);
    Queue.push(17);
    Queue.push(18);
    Queue.push(19);
    Queue.push(20);

    interleave(Queue);
    print(Queue);

}