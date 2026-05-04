#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.push_front(4);
    d.push_front(5);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size: "<<d.size()<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;

    d.erase(d.begin());
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    deque<int> n(5, 100); //5 elements with value 100
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Element at 1st index: "<<d[1]<<endl;

    return 0;
}