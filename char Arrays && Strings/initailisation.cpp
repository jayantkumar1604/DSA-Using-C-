#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[10];
    cin>>ch;
    cout<<"Printing the value of ch: "<<ch<<endl;

    for(int i=0; i<10;i++){
        cout<<"At index : "<<i<<" "<<ch[i]<<endl;
    }
    char temp=ch[7];
    int value=(int)temp;
    cout<<"Printing integer value: "<<ch[6]<<endl;
    return 0;
}