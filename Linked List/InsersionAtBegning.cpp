#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertionathead(Node* &head,Node* &tail, int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;

    }
    else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* forth=new Node(40);
    Node* fifth=new Node(50);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;

    Node* head=first;
    Node* tail=fifth;
    cout<<"Printing entire LL : "<<endl;
    printLL(head);
    cout<<"After adding new node : "<<endl;
    insertionathead(head,tail,5);
    printLL(head);
    return 0;
}