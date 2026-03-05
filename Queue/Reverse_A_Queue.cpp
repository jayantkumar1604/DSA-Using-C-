#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue<int>&Q){
    stack<int>st;
    while(!Q.empty()){
        int top=Q.front();
        Q.pop();
        st.push(top);
    }
    while(!st.empty()){
        int element=st.top();
        st.pop();
        Q.push(element);
    }
}
void reverseUsingRec(queue<int>&Q){
    if(Q.empty())
       return;
    int top=Q.front();
    Q.pop();
    reverseUsingRec(Q);
    Q.push(top);
}
int main(){

    queue<int>Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.push(60);

    reverseUsingRec(Q);
    cout<<"Printing Quueue : "<<endl;
    while(!Q.empty()){
        int ele=Q.front();
        Q.pop();
        cout<<ele<<" ";
    }

    return 0;
}