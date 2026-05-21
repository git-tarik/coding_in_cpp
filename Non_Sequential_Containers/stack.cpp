#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;
    cout<<"Size of stack after pop: "<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<"Popping element: "<<s.top()<<endl;
        s.pop();
    }

    stack<int> s2;
    s2.swap(s);
    cout<<"Size of stack after swap: "<<s.size()<<endl;
    cout<<"Size of stack2 after swap: "<<s2.size()<<endl;

    return 0; 
}