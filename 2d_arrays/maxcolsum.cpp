#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int maxColSum(int mat[][3],int rows,int cols){
    int sum=0;
    int maxSum=0;
    for(int i=0;i<cols;i++){
        sum=0;
        for(int j=0; j<rows;j++){
            sum+=mat[j][i];
            }
        
        maxSum=max(maxSum,sum);
        }
    return maxSum;
    }
int main(){
    int matrix[][3]={{33,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3;
    int mcs;
    mcs=maxColSum(matrix,rows,cols);
    cout<<"Maximum col sum is:"<<mcs;
    return 0;
}
