#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            top--;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int gettop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    int getsize(){
        return top+1;
    }
    void print(){
        cout<<"Top : "<<top<<endl;
        cout<<"Top element : "<<gettop()<<endl;
        cout<<"stack : ";
        for(int i=0;i<getsize();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;;
    }
};
int main(){
    stack st(8);
    st.push(8);
    st.print();

    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    return 0;
}