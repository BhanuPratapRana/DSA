#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
int* arr;
int size;
int top;

Stack(int capacity){
    arr = new int[capacity]();
    size=capacity;
    top=-1; //stack is empty
}

void push(int val){
    if(top==size-1){ //stack is full
      cout<<"stack overflow"<<endl;
    }else{
    top++;
    arr[top]=val;
    }
}

void pop(){
    if(top==-1){
        //stack is empty, nothing to pop
        cout<<"stack underflow"<<endl;
    }
    else{
        //noraml case
        arr[top]=0; //optional 
        top--;
    }
} 

int getsize(){
    return top+1;
}

bool isEmpty(){
    if(top==-1){
        return true;

    }else{
        return false;
    }
}

int gettop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return -1; //stack is empty

    }
    else{
        return arr[top];
    }
}

void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
}

};
 
int main(){
    //creating a stack
    Stack s(5);
    // s.print();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); //stack overflow
    s.print();

    cout<<endl;
    cout<<"Size of stack: "<<s.getsize()<<endl;
    cout<<"Top element: "<<s.gettop()<<endl;
    s.pop();
    s.print();

   
     
     
    return 0; 
}