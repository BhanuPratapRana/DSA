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
       //critria--> (but we think min marks) max marks--> high priority
        return a.marks<b.marks;
    }
};
 

int main(){

    //it creates a max heap
//     priority_queue<int> pq;
//     //it also creates a max heap    
//     priority_queue<int, vector<int>, less<int>> pq2;   


//   //min heap
//     priority_queue<int, vector<int>, greater<int>> pq2;

priority_queue<student , vector<student>, comparator> pq;  

pq.push(student(90,"rana"));
pq.push(student(87,"bhanu"));
pq.push(student(98,"pratap"));
pq.push(student(70,"abir"));

cout<<pq.top().marks<< " "<<pq.top().name<<endl;
pq.pop();

cout<<pq.top().marks<< " "<<pq.top().name<<endl;
pq.pop();

cout<<pq.top().marks<< " "<<pq.top().name<<endl;
pq.pop();

cout<<pq.top().marks<< " "<<pq.top().name<<endl;
pq.pop();


     
     
    return 0; 
}