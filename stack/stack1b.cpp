#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    //constructor
    Stack(int capacity){
        arr = new int[capacity]();
        size=capacity;
        top1=-1; //stack is empty
        top2=size; //stack is empty
    }
    void push1(int val){
        if(top2-top1==1){
            //stack1 is full
            cout<<"Stack1 Overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=val;
        }
    }

      void push2(int val){
        if(top2-top1==1){
            //stack1 is full
            cout<<"Stack2 Overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=val;
        }
    }

    void pop1(){
        if(top1==-1){
            //stack is empty
            cout<<"Stack1 Underflow"<<endl;
        }
        else{
            arr[top1]=0;
            top1--;
        }
        
    }
    void pop2(){
        if(top2==size){
            //stack is empty
            cout<<"stack2 is empty"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<"Stack1: ";
        for(int i=0;i<=top1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        cout<<"Stack2: ";
        for(int i=size-1;i>=top2;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }




};
 
int main(){
    Stack s(5);
    s.print();
    s.push1(10);
    s.push2(20);
    s.print();
    s.push2(30);
    s.print();
    s.push1(40);
    s.push1(50);
    s.push1(60);
    s.print();
     
     
    return 0; 
}