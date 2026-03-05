#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[100];
    // cin>>ch;
    cin.getline(ch,100);
    cout<<"Printing the value of ch: "<<ch<<endl;
    return 0;
}