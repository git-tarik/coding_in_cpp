#include<iostream>
#include<set>
#include<string>

using namespace std;
int main(){
    multiset<int> m;
    
    m.insert(1);
    m.insert(2);
    m.insert(3);

    m.insert(1);
    m.insert(2);
    m.insert(3);
    for(auto x:m){
        cout<<x<<" ";
    }
    return 0;

}

