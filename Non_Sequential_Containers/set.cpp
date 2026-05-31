#include<iostream>
#include<set>
#include<string>

using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); //duplicate elements not allowed
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Size of set: "<<s.size()<<endl;
    s.erase(20);
    cout<<"Size of set after erasing 20: "<<s.size()<<endl;
    cout<<*(s.lower_bound(15))<<endl; //returns iterator to first element not less than 15
    cout<<*(s.upper_bound(25))<<endl; //returns iterator to first element greater than 25
    s.clear();
    cout<<"Size of set after clearing: "<<s.size()<<endl;

    return 0;
} 