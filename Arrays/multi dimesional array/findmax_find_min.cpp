#include<iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[][3],int row,int col){
    int Max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>Max){
                Max=arr[i][j];
            }

        }
    }
   return Max;
}
int findmin(int arr[][3],int row,int col){
    int Min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j>col;j++){
            if(arr[i][j]<Min){
                arr[i][j]=Min;
            }
        }
    }

}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int Maximum=findMax(arr,row,col);
    int Minimum=findmin(arr,row,col);
    cout<<"Maximum No. : "<<Maximum<<endl;
    cout<<"Minimum No. : "<<Minimum<<endl;
}