#include<iostream>
using namespace std;

int FindfirstOccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int n=8;
    int target=30;
    int ansindex=FindfirstOccurance(arr,n,target);

    if(ansindex==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"found at index : "<<ansindex;
    }
        return 0;
}
