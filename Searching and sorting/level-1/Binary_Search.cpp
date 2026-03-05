#include<iostream>
using namespace std;

int Binary_Search(int arr[],int n,int target){
    int start=0;
    int last=n-1;
    int mid=(start+last)/2;
    while(start<=last){
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            last=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+last)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=8;
    int target=60;
    int a=Binary_Search(arr,n,target);
    if(a==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"element found at index : "<<a;
    }
    
}