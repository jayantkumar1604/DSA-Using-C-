#include<iostream>
using namespace std;
int findlength(char ch[],int size){
    int index=0;
    while(ch[index] !='\0'){
    index++;
    }
    return index;
}
bool isPallindrome(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else 
        {
            return false;
        }  
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=findlength(ch,100);
    bool pall=isPallindrome(ch,len);
    if(pall){
        cout<<"Valid Pallindrome"<<endl;
    }
    else{
        cout<<"Invalid Pallindrome"<<endl;
    }
    return 0;
}