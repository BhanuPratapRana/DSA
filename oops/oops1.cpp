#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    //attributes
    int id;
    int age;
    string name;
    int nos;
    int* gpa;


    //parameterized constructor
    Student(int id, int age, string name, int nos, float gpa){
        cout<<"Student parameterized constructor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa); //dynamic memory allocation for gpa

    }

    //copy constructor
    Student(const Student &srcobj){// A as a parameter as source object 
        cout<<"Student copy constructor called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
        
    }


    //constructor
    //ctor: Default constructor
    // Student(){
    //     cout<<"Student Default constructor called"<<endl;
    // }

    //behavior/methods/functions
    void study(){
        cout<<this->name<<"Student is studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<"Student is sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<"student is bunking"<<endl;
    }

    //destructor default: dtor
    ~Student(){
        cout<<"Student default dtor called for "<<this->name<<endl;
        delete gpa; //deleting dynamically allocated memory
    } 
};
 
int main(){

    //creating object of class
    // Student A;
    // A.id = 101;
    // A.age = 20;
    // A.name = "Bhanu ";
    // A.nos = 1;
    // A.study();

    // Student B;
    // B.id = 102;
    // B.age = 21; 
    // B.name = "Rohit";
    // B.nos = 2;
    // B.bunk();

    Student A(101, 20, "Bhanu", 1, 3.5); //parameterized constructor called -- in stack
    Student B(102, 21, "Rohit", 2, 3.8); //parameterized constructor called -- in stack

    Student C = A; //copy constructor called -- in stack
    cout<<C.name<<" "<<A.name<<endl;

    //dynamic memory allocation or student pointer
  Student* D = new Student(103, 22, "Ravi", 3, 3.9);
  cout<<D->name<<endl;
  cout<<D->id<<endl;

  //we have to delete the dynamically allocated memory manually
    delete D; //dtor called for D
  
     
     
    return 0; 
}