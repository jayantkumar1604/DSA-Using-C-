#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void Inerleave(queue<int>&first){
    int size=first.size();
    int n=size/2;
    queue<int>second;
    for(int i=0;i<n;i++){
        int temp=first.front();
        first.pop();
        second.push(temp);
    }

    for(int i=0;i<n;i++){
        int temp1=second.front();
        int temp2=first.front();
        second.pop();
        first.push(temp1);
        first.pop();
        first.push(temp2);
    }
}
    
int main(){
    queue<int>Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.push(60);
    Q.push(70);
    Q.push(80);

    Inerleave(Q);
    cout<<"Printing Quueue : "<<endl;
    while(!Q.empty()){
        int ele=Q.front();
        Q.pop();
        cout<<ele<<" ";
    }
    return 0;
}
