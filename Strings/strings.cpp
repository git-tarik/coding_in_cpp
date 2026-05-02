#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string str = "Hello, World!";
    cout<<"Original string: "<<str<<endl;

    // Accessing characters
    cout<<"First character: "<<str[0]<<endl;
    cout<<"Last character: "<<str[str.size()-1]<<endl;

    // Modifying characters
  //  str[7] = 'C';
    //cout<<"Modified string: "<<str<<endl;

    // Iterating through characters
    cout<<"Characters in the string: ";
    for(char c : str){
        cout<<c<<" ";
    }
    cout<<endl;


    string str2 = " Hello";
    string str3 = " C++";
    // Concatenation
    string str4 = str + str2 + str3;
    cout<<"Concatenated string: "<<str4<<endl;
    // Substring
    string substr = str4.substr(0, 5);
    cout<<"Substring (first 5 characters): "<<substr<<endl;
    // comparing
    string str5 = "Hello, World!";
    if(str == str5){    
        cout<<"Strings are equal"<<endl;
    } else {
        cout<<"Strings are not equal"<<endl;
    }
    if(str<str3){
        cout<<"str is less than str3"<<endl;
    } else {
        cout<<"str is not less than str3"<<endl;
    }
    string str6;
    //cin>>str6;//not able to take input with spaces
    getline(cin,str6);
    for(char c : str6){
        cout<<c<<" ";
    }
    return 0;
}