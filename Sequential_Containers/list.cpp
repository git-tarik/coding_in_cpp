#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

   l.push_front(4);
    l.push_front(5);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_back();
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size: "<<l.size()<<endl;

    cout<<"Front: "<<l.front()<<endl;
    cout<<"Back: "<<l.back()<<endl;

    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    list<int> n(5, 100); //5 elements with value 100
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;\

   // cout<<"Element at 1st index: "<<l[0]<<endl;  throws error as list doesn't support random access

    return 0;
}