#include<iostream>
using namespace std;

void converttolowercase(char ch[],int n){
    int index=0;
    while(ch[index]!='\0'){
        char currcharacter=ch[index];
        if(currcharacter >='A' && currcharacter <='Z'){
            ch[index]=currcharacter -'A'+'a';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before : "<<ch<<endl;
    converttolowercase(ch,100);
    cout<<"After : "<<ch<<endl;
    return 0;

}