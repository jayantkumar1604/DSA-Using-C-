#include<iostream>
using namespace std;

int Interpolation_Search(int arr[],int n,int target){
    int start=0;
    int last=n-1;
    int pos=(start+(((target-arr[start])*(last-start))/(arr[last]-arr[start]))/2);
    while(start<=last){
        if(arr[pos]==target){
            return pos;
        }
        else if(target<arr[pos]){
            last=pos-1;
        }
        else{
            start=pos+1;
        }
       pos=(start+(((target-arr[start])*(last-start))/(arr[last]-arr[start]))/2);
    }
    return -1;
}
int main(){
    int arr[]={1,3,7,15,20,21,50,55,75,80};
    int n=10;
    int target=50;
    int a=Interpolation_Search(arr,n,target);
    if(a==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"element found at index : "<<a;
    }
    
}