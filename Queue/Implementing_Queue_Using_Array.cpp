#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        arr = new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int val){
        //Overflow
        //empty case
        //normal flow
        if(rear==size-1){
            cout<<"Overflow"<<endl;
            return;
        }
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        //Underflow
        //singlecase
        //normalflow
        if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
            return;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
        
    }
    int getsize(){
        if(front==-1 &&rear==-1){
            return 0;
        }
        else{
            return rear-front+1;
        }
    }
    int getfront(){
        if(front==-1){
            cout<<"No element in the queue"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    void print(){
        cout<<"Printing Queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int size=6;
    Queue q(size);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();
    
    q.push(50);
    q.print();

    q.push(60);
    q.print();

    q.pop();
    q.pop();
    q.pop();

    q.print();
    return 0;
}