#include<iostream>
using namespace std;

void incrementBy1(int &n){
    n++;
    return;
}
int main(){
    int n;
    cin>>n;
    incrementBy1(n);
    cout<<"n: "<<n<<endl;
    return 0;
}