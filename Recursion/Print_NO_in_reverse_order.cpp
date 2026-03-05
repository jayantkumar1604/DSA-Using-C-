#include<iostream>
using namespace std;

void printinreverseorder(int n){
    if(n==1 || n==0){
        cout<<"1";
        return;
    }
    cout<<n<<" ";
    printinreverseorder(n-1);
}
int main(){
    printinreverseorder(100);
}