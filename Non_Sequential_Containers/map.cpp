#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string,int> m;
    
    m["tv"]=100;
    m["radio"]=50;
    m["laptop"]=800;
    m["phone"]=600;
    
    m.erase("tv");
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    //lexicographical order of printing keys in map 
    m.insert({"camera",300});
    m.emplace("headphone",150);
    cout<<m["camera"]<<endl;
    cout<<m["tv"]<<endl; //if key not found it will insert key with value 0
    cout<<m.size()<<endl;
    cout<<m.count("laptop")<<endl; //1 if key found else 0
   
    return 0;
}