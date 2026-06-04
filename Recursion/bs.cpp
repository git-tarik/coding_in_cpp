#include<iostream>
#include<vector>
using namespace std;
int bS(vector<int> v,int st,int end,int x){
    int mid=(st+end)/2;
    if(v[mid]==x){
        return mid;
    }
    else if(x<v[mid]){
       return bS(v,st,mid-1,x);
    }
    else{
       return bS(v,mid+1,end,x);
    }
    return -1;
}
int main(){
    vector<int> v={1,2,3,4,5};
    int x,st=0,end=v.size()-1;
    cout<<"enter the finding element";
    cin>>x;
    cout<<bS(v,st,end,x);
    return 0;
}