#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    // size check
    cout<<"Size of stack : "<<st.size()<<endl;

    //remove
    st.pop();

    //check empty
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is non empty"<<endl;
    }
    cout<<st.top();
}