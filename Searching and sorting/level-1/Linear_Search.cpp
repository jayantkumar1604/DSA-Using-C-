#include<iostream>

using namespace std;

int Linear_Search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
        return false;
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=8;
    int target=70;
    int a=Linear_Search(arr,n,target);
    cout<<a;

    return 0;
}