#include<iostream>
using namespace std;

int sumof(int n){
    if(n==0) return 0;
    return n + sumof(n-1);
}

int main(){
    cout<<sumof(10)<<endl;
    return 0;
}