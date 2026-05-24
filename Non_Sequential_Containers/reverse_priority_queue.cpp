#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater <int> > pq;
    pq.push(3);
    pq.push(7);
    pq.push(1);
    cout<<"Size of priority queue: "<<pq.size()<<endl;
    cout<<"Top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element after pop: "<<pq.top()<<endl;
    cout<<"Size of priority queue after pop: "<<pq.size()<<endl;
    while(!pq.empty())
    {
        cout<<"Popping element: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0; 
} 