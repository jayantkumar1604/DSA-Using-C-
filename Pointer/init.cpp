#include<iostream>
using namespace std;

int main(){
    int a=6;
    int* ptr=&a;
    cout<<"Address of a: "<<&a<<endl;;
    cout<<ptr<<endl;
    cout<<"Accessing : "<<*ptr<<endl;
    cout<<&ptr<<endl;
    return 0;
}