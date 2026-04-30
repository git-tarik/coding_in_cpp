#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int maxRowSum(int mat[][3],int rows,int cols){
    int sum=0;
    int maxSum=0;
    for(int i=0;i<rows;i++){
        sum=0;
        for(int j=0; j<cols;j++){
            sum+=mat[i][j];
            }
        
        maxSum=max(maxSum,sum);
        }
    return maxSum;
    }
int main(){
    int matrix[][3]={{33,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3;
    int mrs;
    mrs=maxRowSum(matrix,rows,cols);
    cout<<"Maximum row sum is:"<<mrs;
    return 0;
}
