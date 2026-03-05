#include<iostream>
using namespace std;
int Power(int n){
    if(n==0)
      return 1;
    int ans=2*Power(n-1);
    return ans;   
}
int main(){
    cout << Power(10)<<endl;
    return 0;
}