#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse_K_element(queue<int>&Q,int K){
    stack<int>st;
    int n=Q.size();
    if(K>n && K==0){
        return;
    }
    //Push K element in stack
    for(int i=0;i<K;i++){
        int element=Q.front();
        Q.pop();
        st.push(element);
    }

    //Push all element into Queue
    while(!st.empty()){
        int ele=st.top();
        st.pop();
        Q.push(ele);
    }

    for(int i=0;i<n-K;i++){
        int ele=Q.front();
        Q.pop();
        Q.push(ele);
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

    reverse_K_element(Q,3);
    cout<<"Printing Quueue : "<<endl;
    while(!Q.empty()){
        int ele=Q.front();
        Q.pop();
        cout<<ele<<" ";
    }

    return 0;
}