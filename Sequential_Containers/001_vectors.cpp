#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec={10,20,30,40,50};
    vector <int> vec2(3,0);
    vector <char> vec3={'a','b','c'};
    cout<<vec[0]<<endl;
    cout<<vec2[0];
    cout<<vec2[1];
    cout<<vec2[2];
    cout<<endl;

    for (int i : vec2){
        cout<<i<<endl;
    }

    for (char c : vec3){
        cout<<c<<endl;
    }
    return 0;
}