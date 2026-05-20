#include<iostream>
#include<utility> //for pair
using namespace std;

int main()
{
pair<int,int> p = {10,20};
pair<string,int> q = {"Hello",100};
pair<int,pair<char,int>> r = {1,{'A',65}};
cout<<p.first<<" "<<p.second<<endl;
cout<<q.first<<" "<<q.second<<endl;
cout<<r.first<<" "<<r.second.first<<" "<<r.second.second<<endl;
return 0;
}

