#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    multimap<string,int> m;
    m.insert({"tv",100});
    m.insert({"tv",200});
    m.insert({"tv",300});
    m.erase(m.find("tv"));
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    return 0;
} 