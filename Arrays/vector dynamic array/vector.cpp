#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    cout<<"Printing Vector : ";
    // int size=v.size();
    // for(int i=0;i<size;i++){
    //     cout<<v.at(i)<<" ";
    // }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    // vector<int>arr;
    // vector<int>arr2(5,-1);
    // print(arr2);
    // arr2.pop_back();
    // print(arr2);
    // vector<int>arr4{1,2,3,4,5};
    // print(arr4);
    // vector<int>arr5={1,2,3,4,5};
    // vector<int>arr6(arr5);
    // print(arr6);

    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    cout<<"Front element: "<<v[0]<<endl;
    cout<<"Front element: "<<v.front()<<endl;
    cout<<"End element: "<<v[v.size()-1]<<endl;
    cout<<"End element: "<<v.back()<<endl;
}