#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,5,8,9,12};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}