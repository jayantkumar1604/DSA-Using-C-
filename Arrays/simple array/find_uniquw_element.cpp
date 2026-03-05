#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={2,3,4,7,9,11,5,4,3,9,2,5,7};
    int n=13;
    int finalans=unique(arr,n);
    cout<<"Finalans : "<<finalans<<endl;
    return 0;
}