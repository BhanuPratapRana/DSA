#include<bits/stdc++.h>
using namespace std;

void reverseQueueRec(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }
    //1 case hum solve krenge
    int frontelement = q.front();
    q.pop();

    //baaki recursion dekh lega
    reverseQueueRec(q);

    //backtrack
    q.push(frontelement);
}
void reversequeue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

}
 
int main(){
     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);

     

    //  reversequeue(q);
    reverseQueueRec(q);
     
     while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
     }

         while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
     }
     
    return 0; 
}