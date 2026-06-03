#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s = "abc";
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    prev_permutation(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}