#include<iostream>
#include<vector>
using namespace std;

//recursion

/*

int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);

}

*/

//iterative
 int fib(int n) {
       if(n==1 || n==0){
        return n;
    }
        vector<int> f(n+1);
        f[0]=0,f[1]=1;
        for(int i=2;i<=n;i++){
             f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }


int main(){
    int n;
    cout<<"enter the term you want";
    cin>>n;
    cout<<fib(n);
    return 0;

}