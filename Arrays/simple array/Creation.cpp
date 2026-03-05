#include<iostream>
using namespace std;

int main(){
    int arr[100];
    char ch[102];
    bool flags[103];
    long num[100];
    short snum[100];
    cout<<"Array created successfully"<<endl;

    int a=5;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"size of a : "<<sizeof(a)<<endl;
    return 0;
}