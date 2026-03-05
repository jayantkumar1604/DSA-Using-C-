#include<iostream>
using namespace std;

void checkEvenOdd(int n){
    if(n%2==0){
        cout<<n<<" is Even"<<endl;
    }
    else{
        cout<<n<<" is Odd"<<endl;
    }
}
int main(){
    checkEvenOdd(10);
}