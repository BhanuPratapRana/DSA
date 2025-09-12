#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int marks;
    string name;
 
 //constructor
 student(){

 }


    student(int m,string n){
        this->marks =m;
        this->name =n;
    }
};

class comparator{
    public:
    bool operator()(student a, student b){
        if(a.marks==b.marks){
            return a.name< b.name;
        }
        return a.marks<b.marks;
    }
};


 
int main(){

    vector<student> arr;
    arr.push_back(student(98,"rana"));
    arr.push_back(student(89,"bhanu"));
    arr.push_back(student(98,"pratap"));

    sort(arr.begin(),arr.end(), comparator());


    for(student a: arr){
        cout<<a.marks<<" "<<a.name<<endl;
    }
     
     
    return 0; 
}