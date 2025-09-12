#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int marks;
    string name;
 
 //constructor
 student(){

 }


    student(int m, int n){
        this->marks =m;
        this->name =n;
    }
};

//functor

class studentcomparator{
    public:
    bool operator()(student a,student b){
        return a.marks< b.marks; 
    }

};

 
int main(){

    student s1; 

    student s2;

    s1.marks=90;
    s1.name="bhanu";    

    s2.marks=98;
    s2.name="rana";

    studentcomparator cmp;
    
    if(cmp(s1, s2)){
        cout<<"rana ke marks jyada hain bhanu se";
    }
    else{
        cout<<"rana ke marks km hain bhanu se";
    }
     
    return 0; 
}