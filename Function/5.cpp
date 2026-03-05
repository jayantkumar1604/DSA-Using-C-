#include<iostream>
using namespace std;

void printA(){
    cout<<"inside A"<<endl;
    cout<<"going back to main"<<endl;
}
int main(){
    cout<<"inside main"<<endl;
    printA();
    cout<<"Back in main"<<endl;
}