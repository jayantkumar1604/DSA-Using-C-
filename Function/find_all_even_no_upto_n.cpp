#include<iostream>
using namespace std;

void Even(int n){
    for(int i=2;i<=n;i=i+2){
        cout<<i<<endl;
    }

}
int main(){
    Even(11);
}