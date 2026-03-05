#include<iostream>
using namespace std;

// int main(){
    // int arr[5]={1,2,3,4,5};
    // int* ptr1= arr;
    // int (*ptr)[5]=&arr;
    // cout<<(*ptr)[4];

    void solve(int arr[],int size){
        cout<<"Size of array inside function : "<<sizeof(arr)<<endl;
    }
    int main(){
        int arr[]={10,20,30,40,50};
        cout<<"Size of array : "<<sizeof(arr)<<endl;
        solve(arr,5);
    }
