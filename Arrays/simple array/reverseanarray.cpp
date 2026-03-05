#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={60,50,40,30,20,10};
    int size=6;
    reverseArray(arr,size);
    return 0;

}