/*reversing the queue using recursion*/


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
void reversequeue(queue<int> &q)
{
    if(q.empty())
       return;
    int data=q.front();
    q.pop();

    reversequeue(q);

    q.push(data);


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

    reversequeue(Queue);
    print(Queue);

}