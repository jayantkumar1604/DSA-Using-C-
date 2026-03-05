#include<iostream>
using namespace std;

int diagonal_wise_sum(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
    }
    cout<<"Sum : "<<sum<<endl;
}
int reverse_diagonal(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][col-1];
        col--;
    }
    cout<<"Sum : "<<sum;
}
int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row=4;
    int col=4;
    diagonal_wise_sum(arr,row,col);
    reverse_diagonal(arr,row,col); 
}