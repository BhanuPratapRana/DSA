#include<bits/stdc++.h>
using namespace std;

void printmiddle(stack<int> &s, int count){
    //base case
    if(count == 0){
        cout<<s.top();
        return ;
    }
    //recursive case
    //1 case hum sambhaal lenge baaki recursion dekh lega
    int topElement  = s.top(); //top element ki location lost na ho jaae isliye store krliya
    s.pop();
    count--;

    //recursion
    printmiddle(s,count);

    //backtracking
    s.push(topElement);
}
 
int main(){
     stack<int> s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     

     int count= s.size()/2;
     
     printmiddle(s,count);
     
    return 0; 
}