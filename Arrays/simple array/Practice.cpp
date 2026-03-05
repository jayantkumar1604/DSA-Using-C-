#include<iostream>
using namespace std;

int main(){
// Array Creation
//     int arr[100];
//     char ch[101];
//     bool flags[223];
//     long num[900];
//     short snum[1000];

//     cout<<"Array created successfully"<<endl;

// int a=5;
// cout<<"Address of a : "<< &a<<endl;
// cout<<"Size of a: " <<sizeof(a)<<endl;

// int arr[10];
// cout<<"Base address of arr is "<<&arr<<endl;
// cout<<"Base address of arr is "<<arr<<endl;
// cout<<"Size of arr : "<<sizeof(arr);


// ARRAY INITALISATION
    // int arr[]={2,3,4,5,6};
    // int brr[5]={2,4,5,7,8};
    // int crr[5]={1,8};
    // int drr[3]={2,3,4,5,6}; //error
// INDEXING IN ARRAYS
//   int arr[5]={2,3,4,5,6};
//    cout<< arr[0]<<endl;
//    cout<< arr[1]<<endl;
//    cout<< arr[2]<<endl;
//    cout<< arr[3]<<endl;
//    cout<< arr[4]<<endl;
//   for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
// TAKING INPUT
// int arr[5];
// int n=5;
// for(int i=0;i<n;i++){
//     cout<<"Enter the value for index " << i <<": ";
//     cin>>arr[i];
//     cout<<endl;
// }
// cout<<"Printing the array "<<endl;

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// int arr[10];
// int n=10;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"Elements before doubling : "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// for(int i=0;i<n;i++){
//     arr[i]=2*arr[i];
// }
// cout<<endl<<"Element after doublings : "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// int arr[5];
// int n=5;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"Printing after taking input : "<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// int sum=0;
// for(int i=0;i<n;i++){
//     sum=sum+arr[i];
// }
// cout<<"Sum : "<<sum;

// LINEAR SEARCH IN AN ARRAY

int arr[6]={10,20,30,40,50,60};
int n=6;
int target=50;
bool flag=0;

for(int i=0;i<n;i++){
    if(target==arr[i]){
        flag=1;
        break;  
    }
}
if(flag==1){
    cout<<"target found";
}
else{
    cout<<"target not found";
}


return 0;
}