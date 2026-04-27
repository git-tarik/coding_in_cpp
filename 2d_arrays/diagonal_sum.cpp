#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int diaSum(int mat[][4],int n){
    int pd=0;
    int sd=0;
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(i==j) pd+=mat[i][j];
            else if(i+j==n-1) sd+=mat[i][j];
        }
    }
    if(n%2==0){
        total=pd+sd;
    }
    else{
        total=pd+sd-mat[n/2][n/2];
    }
    return total;
}
int main(){
    int matrix[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
    int ds;
    ds=diaSum(matrix,4);
    cout<<"Diagonal sum is:"<<ds;
    return 0;
}
