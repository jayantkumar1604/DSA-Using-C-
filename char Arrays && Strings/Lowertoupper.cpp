#include<iostream>
using namespace std;

void converttouppercase(char ch[],int n){
    int index=0;
    while(ch[index]!='\0'){
        char currcharacter=ch[index];
        if(currcharacter >='a' && currcharacter <='z'){
            ch[index]=currcharacter -'a'+'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before : "<<ch<<endl;
    converttouppercase(ch,100);
    cout<<"After : "<<ch<<endl;
    return 0;
}