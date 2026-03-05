#include<iostream>
using namespace std;

int main(){
    string name;
    cin>>name;
    cout<<"Printing name: "<<name<<endl;
    int index=0;
    while(name[index] != '\0'){
        cout<<"Index: "<<"character: "<<name[index]<<endl;
        index++;
    }
    cout<<"Printing index 6 value: " <<name[index]<<endl;
    int value=(int)name[6];
    cout<<"Value: "<<value<<endl;

}