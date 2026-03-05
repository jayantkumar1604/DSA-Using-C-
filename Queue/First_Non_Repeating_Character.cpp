#include<iostream>
#include<queue>
using namespace std;

int main(){
    string str="ababcdeecd";
    queue<char>q;
    int freq[26]={0};

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        freq[ch-'a']++;
        q.push(ch);
    }

    while(!q.empty()){
        char FrontCharacter=q.front();
        if(freq[FrontCharacter-'a']>1){
            q.pop();
        }
        else{
            cout<<FrontCharacter<<"->";
            break;
        }
    }
    if(q.empty()){
        cout<<"#"<<"->";
    }
    return 0;
}