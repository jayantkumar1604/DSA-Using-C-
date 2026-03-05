#include<iostream>
#include<vector>
#include<vector>

using namespace std;

class Student{

private:
    string gf;
public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;
// ctor: Default ctor : assigns garbage value
    Student(){
        cout<<"Student ctor called"<<endl;
    }

// parameterize ctor
    Student(int id, int age,bool present,string name,int nos,string gf){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        this->gf=gf;
        this->v=new int(10);
        cout<<"Student paremeterized ctor called"<<endl;
    }
    Student(int id, int age,bool present,string name,int nos){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        cout<<"Student paremeterized ctor w/o gf called"<<endl;
    }
        void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }
//copy ctor
   


};
int main(){
    //cout<<sizeof(Student)<<endl;
    Student s1(1, 12, 1, "Chota Bheem", 1, "Chutki");
    Student s2=s1;
    
    cout<<s1.name<<endl;
    cout<<s2.name<<endl; // no LEAK


}

