#include<iostream>
using namespace std;

// void printMax(int num1,int num2,int num3){
//     if(num1>num2 && num2>>num3){
//         cout<<num1<<" is greater";
//     }
//     else if(num2>num1 && num2>num3){
//         cout<<num2<<" is greater";
//     }
//     else{
//         cout<<num3<<" is greater";
//     }
// }
// int main(){
//     printMax(2,5,8)
// }
void printMax(int num1,int num2,int num3){
    int ans1=max(num1,num2);
    int finalans=max(ans1,num3);
    cout<<finalans<<" is greater";
}
int main(){
    printMax(5,-9,990);
}