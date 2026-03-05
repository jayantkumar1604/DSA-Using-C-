#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    cout<<"Printing Vector: "<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    // insert
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);
    for(int i=0;i<10;++i){
        v.push_back(80);
    }
    print(v);
    v.clear();
    print(v);
    v.push_back(50);
    print(v);
}