#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter the digit : "<<endl;
    cin>>n;
    while(n!=0){
        x=n%10;
        n=n/10;
        cout<<x;
    }
    return 0;

}