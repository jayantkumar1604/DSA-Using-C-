// //Arrays and functions
// #include<iostream>
// #include<limits.h>
// using namespace std;

// // void printArray(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }

// // bool LinearSearch(int arr[],int size,int target){
// //     for(int i=0;i<size;i++){
// //     if(arr[i]==target){
// //         return true;
// //     }
// //     }
// //     return false;

// // }
// void ZeroOneCount(int arr[],int n){
//     int ZeroCount=0;
//     int OneCount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             ZeroCount++;
//         }
//         if(arr[i]==1){
//             OneCount++;
//         }
        
//     }
//     cout<<"ZeroCount : "<<ZeroCount<<endl;
//     cout<<"OneCount : "<<OneCount<<endl;
// }
// int findMinimumArray(int arr[],int n){
//     int minAns=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//     }
    
// }
// return minAns;
// }
// int findMaximumArray(int arr[],int n){
//     int maxAns=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxAns){
//         maxAns=arr[i];
//     }
// }
// return maxAns;
// }
// int ReverseArray(int arr[],int n){
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }}
// int ExtremePrint(int arr[],int n){
//     int left=0;
//     int right=n-1;
//     while(left<right){
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         left++;
//         right--;
        
//     }
//     if(left=right){
//             cout<<arr[left];
//         }
// }
// int main(){

//     // int arr[]={0,1,0,0,0,1,1,1,1,0,1,0,1,0};
//     // int n=14;
//     // ZeroOneCount(arr,n);
// //     int arr[5]={2,4,6,8,10};
// //     int size=5;
// //     printArray(arr,size);
// //     int target=10;
// //     bool ans=LinearSearch(arr,size,target);
// //     if(ans==1){
// //         cout<<"Target Found";
// //     }
// //     else{
// //         cout<<"Target Not Found";
// //     }
// int arr[]={20,85,25,63,22,11,10};
// int n=7;
// // int minimum=findMinimumArray(arr,n);
// // int maximum=findMaximumArray(arr,n);

// // cout<<"Minimum Element : "<<minimum<<endl;
// // cout<<"Maximum Element : "<<maximum<<endl;
// ExtremePrint(arr,n);
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

// int UniqueElement(int arr[],int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[]={2,10,11,13,10,2,15,13,15};
//     int n=9;
//     int Answer=UniqueElement(arr,n);
//     cout<<Answer;
//     return 0;
// }

// int main(){
//     int arr[]={1,2,3,4};
//     int n=4;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//             }
//         }
//     }

// }
// int ZeroOneCount(int arr[],int n){
//     int ZeroCount=0;
//     int OneCount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             ZeroCount++;
//         }
//         if(arr[i]==1){
//             OneCount++;
//         }
//     }
// int index=0;
// while(ZeroCount--){
//     arr[index]=0;
//     index++;
// }
// while(OneCount--){
//     arr[index]=1;
//     index++;
// }}
// int main(){
//     int arr[]={0,1,0,0,0,0,0,1,1,1,0,1,0};
//     int n=13;
//     ZeroOneCount(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int shiftbyone(int arr[],int n){
//     int temp=arr[n-1];
//     for(int i=n-1;i>=1;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n=6;
//     shiftbyone(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
void print(vector<int> v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
}