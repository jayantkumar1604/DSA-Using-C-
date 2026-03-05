#include<iostream>
using namespace std;

bool search(int arr[],int size, int target,int index ){
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    bool ans= search(arr,size,target,index+1);
    return ans;
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;
    cout<<"Target found or not : "<<search(arr,size,target,index+1);

    return 0;
}