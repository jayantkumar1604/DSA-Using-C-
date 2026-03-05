#include<iostream>
using namespace std;

int Sum(int a,int b,int c){
    int ans=a+b+c;
    return ans;
}

int main(){
    int sum=Sum(1,2,3);
    cout<<"Sum is "<<sum<<endl;
}