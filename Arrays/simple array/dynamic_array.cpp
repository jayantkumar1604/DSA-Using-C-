#include<iostream>
using namespace std;

void fun(int arr[],int n){
    cout<<"Arrays are ";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;++i){
        int data;
        cin>>data;
        arr[i]=data;

    }
    fun(arr,n);
}