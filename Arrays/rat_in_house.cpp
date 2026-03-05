#include<bits/stdc++.h>
using namespace std;

int Calculate(int r,int unit,int n,int arr[]){
    if(n==0)
        return -1;
    int totalfoodReqired=r * unit;
    int foodTillNow=0;
    int house=0;
    for(house=0;house<n;house++){
        foodTillNow+=arr[house];
        if(foodTillNow>=totalfoodReqired){
            break;
        }
    }
    if(totalfoodReqired>foodTillNow)
     return 0;
    return house+1;
}
int main(){
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Calculate(r,unit,n,arr);
    return 0;
}