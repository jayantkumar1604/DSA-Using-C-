#include<iostream>
using namespace std;

void SumuptoN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Final sum is "<<sum<<endl;
}
int main(){
    SumuptoN(10);
}