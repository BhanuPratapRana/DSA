#include<bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int> &s, int value) {
    //base case
    if(s.empty()){
        s.push(value);
        return;
    }

    //ek case hum sambhal lenge baakirecursion dekh lega
    int topElement =s.top();
    s.pop();
    //recursive call
    insertatbottom(s, value);

    //backtrack
    s.push(topElement);
    //now stack has the value at bottom
}
 
int main(){
    
     stack<int> s;
     s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        int value =32;

        insertatbottom(s,value);

        //printing stack
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
     
    return 0; 
}