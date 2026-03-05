#include<iostream>
using namespace std;

int Row_wise_Sum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum : "<<sum<<endl;;
    }
}
int Col_wise_Sum(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum=sum+arr[j][i];
        }
        cout<<"Sum : "<<sum<<endl;
    }
}
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    Row_wise_Sum(arr,row,col);
    Col_wise_Sum(arr,row,col);
}