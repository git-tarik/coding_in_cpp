#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    char str[]={'a','b','c','\0'};
    char str2[]="Hello";
    char str3[100];
    cin.getline(str3,100,'$');
    cout<<str3<<endl;
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    cout<<str2<<endl;
    cout<<strlen(str2)<<endl;
    cout<<str2[4]<<endl;
    return 0;    
} 