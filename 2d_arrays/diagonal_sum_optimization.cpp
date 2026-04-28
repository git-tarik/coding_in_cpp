#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int diaSum(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
       sum+=mat[i][i];
       if(i != n-i-1)
       sum+=mat[i][n-i-1];
    }
    return sum;
}
int main(){
    int matrix[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
    int ds;
    ds=diaSum(matrix,4);
    cout<<"Diagonal sum is:"<<ds;
    return 0;
}

