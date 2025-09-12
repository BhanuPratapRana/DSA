#include<bits/stdc++.h>
using namespace std;

class Student{
   private:
    int id;
    int age;
    string name;
    int nos;

    float*gpa;
    string gf;

    public:
    void setgpa(float a){
        //layer of authentication
        *this->gpa = a;
    }

    float getgpa()const{
        return *this->gpa;
    }

    float getage() const{
        return this->age;
    }

    void accessgf(){
        gfchatting();
    }
    //ctor
      Student(int id, int age, string name, int nos, float gpa,string gf){
        cout<<"Student parameterized constructor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa); //dynamic memory allocation for gpa
        this->gf=gf;
    }

        //copy constructor
    Student(const Student &srcobj){// A as a parameter as source object 
        cout<<"Student copy constructor called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
        
    }

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

    private:
    void gfchatting(){
        cout<<this->name<<" student is chatting with gf"<<endl;
    }






};
 
int main(){
    Student A(1,12,"rana",5,7,"gf");

    cout<<A.getgpa()<<endl;
    A.setgpa(6.7);
    cout<<A.getgpa()<<endl;
    cout<<A.getage()<<endl;
    A.accessgf();
    
     
     
    return 0; 
}