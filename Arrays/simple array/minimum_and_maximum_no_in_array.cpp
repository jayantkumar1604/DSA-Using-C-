#include<iostream>
#include<limits.h>
using namespace std;

int findminimum(int arr[],int size){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns=arr[i];
    }
}
    return minAns;
}
int findmaximum(int arr[],int size){
    int maxAns=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns=arr[i];
    }
    }
    return maxAns;
}

int main(){
    int arr[]={95,12,4,5,87,52,65,41,25,-5,44,5};
    int size=12;
    int minimum=findminimum(arr,size);
    int maximum=findmaximum(arr,size);
    cout<<"Minimum number is : "<<minimum<<endl;
    cout<<"Maximum number is : "<<maximum;
    return 0;
}