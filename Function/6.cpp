#include<iostream>
using namespace std;

void printC(){
    cout<<"inside C"<<endl;
}
void printB(){
    cout<<"inside B"<<endl;
    printC();
}
void printA(){
    cout<<"inside A"<<endl;
    printB();
}

int main(){
    printA();
}
