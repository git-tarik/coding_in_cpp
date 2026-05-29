#include<iostream>
#include<map>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,int> m;
    
    m.emplace("tv",100);
    m.emplace ("radio",50);
    m.emplace("laptop",800);
    m.emplace("phone",600);
    
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
   
    return 0;
}