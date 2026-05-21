#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;
    cout<<"Size of queue after pop: "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<"Popping element: "<<q.front()<<endl;
        q.pop();
    }

    queue<int> q2;
    q2.swap(q);
    cout<<"Size of queue after swap: "<<q.size()<<endl;
    cout<<"Size of queue2 after swap: "<<q2.size()<<endl;
    return 0; 
}