#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[5];
    vector <int>arr;
    // vector <int> v(5,-1);
    // cout<<" size of vector: "<<v.size();
    // cout<<endl<<"Printing vector"<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";

    // }cout<<endl;
    arr.push_back(4);
    arr.push_back(8);
    arr.push_back(12);
    arr.push_back(4);
    arr.push_back(11);

    cout<<arr.size()<<endl;

    cout<<arr.empty();

}