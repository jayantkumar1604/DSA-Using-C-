#include<iostream>
using namespace std;

void Merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int leftlen=mid-s+1;
    int rightlen=e-mid;

    int *left=new int[leftlen];
    int *right=new int[rightlen];

    int k=s;
    for(int i=0;i<leftlen;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<rightlen;i++){
        right[i]=arr[k];
        k++;
    }

    int leftindex=0;
    int rightindex=0;
    int mainindex=s;

    while(leftindex<leftlen && rightindex<rightlen){
        if(left[leftindex]<right[rightindex]){
            arr[mainindex]=left[leftindex];
            leftindex++;
            mainindex++;
        }
        else{
            arr[mainindex]=right[rightindex];
            mainindex++;
            rightindex++;
        }
    }
    while(rightindex<rightlen){
        arr[mainindex]=right[rightindex];
        mainindex++;
        rightindex++;
    }
    while(leftindex<leftlen){
        arr[mainindex]=left[leftindex];
        mainindex++;
        leftindex++;
    }
    
    delete[] left;
    delete[] right;
}

void MergeSort(int arr[],int s,int e){
    if(s>e && s==e){
        return;
    }
    int mid=s+(e-s)/2;

    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    Merge(arr,s,e);

}
int main(){
    int arr[]={70,60,75,50,20,40};
    int size=6;
    int s=0;
    int e=size-1;
    cout<<"Before mergesort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MergeSort(arr,s,e);
    cout<<"After mergesort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}