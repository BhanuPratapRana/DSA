#include<bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int>&s,int val){
    if(s.empty() || s.top() <= val){
        s.push(val);
        return;
    }
    //base case
    //male sure-----------jb sbho stack ke top ko directly access kr rhe ho then make sure stack should not be empty and check it
    if(!s.empty()&& s.top()<val){
        s.push(val);
        return;
    }

    //1 case
    int topE= s.top();
    s.pop();

    //recursive vase
     sortedinsert(s,val);
     //backtrack
     s.push(topE);


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
    int val=23;

    sortedinsert(s,val);
    print(s);


     
    return 0; 
}