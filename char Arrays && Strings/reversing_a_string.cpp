#include <iostream>
using namespace std;
int findlength(char ch[],int size){
    int index=0;
    while(ch[index] !='\0'){
    index++;
    }
    return index;
}
void reversestring(char ch[],int n){
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--; 
    }   
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before : "<<ch<<endl;
    int len=findlength(ch,100);
    reversestring(ch,len);
    cout<<"After : "<<ch<<endl;
}