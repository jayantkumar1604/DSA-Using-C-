#include<iostream>
#include<string>
using namespace std;


int findlength(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
           break;
        }
        else{
           length++;
        }
    }
    return length;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=findlength(ch,100);
    cout<<"Length of the ch : "<<len<<endl;
    // cout<<"Length of the ch : "<<strlen(ch)<<endl;
    return 0;

}