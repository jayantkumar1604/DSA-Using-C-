#include<iostream>
using namespace std;
void countZeroOne(int arr[],int size){
    int ZeroCount=0;
    int OneCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            ZeroCount++;
        }
        if(arr[i]==1){
            OneCount++;
        }
    }
    cout<<"Zero Count : "<<ZeroCount<<endl;
    cout<<"One Count : "<<OneCount<<endl;
}

int main(){
    int arr[15]={0,1,0,1,0,1,1,0,1,0,0,1,1,0,0};
    int size=15;
    countZeroOne(arr,size);
    return 0;
}