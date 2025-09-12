#include<bits/stdc++.h>
using namespace std;

void inseratbottom(stack<int>&s,int val){
    //base case
    if(s.empty()){
        s.push(val);
        return;
    }
    // 1 case
    int topelement= s.top();
    s.pop();
    
    //baaki recursion
    inseratbottom(s,val);

    //backtrack
    s.push(topelement);
}

void reverseback(stack<int>&s){
//base case
if(s.empty()){
    return;
}
//1 case
int topE =s.top();
s.pop();

//baaki recursion sambhaal lega
reverseback(s);
//jab waapis aaunga 
inseratbottom(s,topE);
}

void print(stack<int>s){
 while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
 }
 cout<<endl;
}
 
int main(){
       stack<int> s;
     s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);
    reverseback(s);
    print(s);
    
     
    return 0; 
}