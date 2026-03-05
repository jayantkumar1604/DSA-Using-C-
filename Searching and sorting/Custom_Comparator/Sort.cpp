#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
bool mycomp(int &a, int &b){
    // return a<b; // incresing order
    return a>b; // decreasing order
}
int main(){
    vector<int> v={11,66,33,22,99};
    sort(v.begin(),v.end(), mycomp);
    print(v);
    return 0;
}