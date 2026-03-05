#include<iostream>
using namespace std;

void replacecharacter(char ch[],int n){
    int index=0;
    while (ch[index] != '\0')
    {
        if(ch[index] == '$')
            ch[index] = ' ';
        index++;
    }   
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before : "<<ch<<endl;
    replacecharacter(ch,100);
    cout<<endl<<"After : "<<ch<<endl;
    return 0;
}