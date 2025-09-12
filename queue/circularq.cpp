#include<bits/stdc++.h>
using namespace std;

class circularqueue{
    int *arr;
    int n;
    int front;
    int rear;

    circularqueue(int size){
        this->n=size;
        arr = new int[size];
        front=-1;
        rear=-1;
    }

    void push(int val){
        //4 case-- overflow 1st element circular nature normal flow

        if((front ==0 && rear==n-1) ||( rear==front-1)){
            cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear==n-1 && front!=0){  //circular nature
            rear=0;
            arr[rear]=val;

        }
        else{
          //noraml flow
          rear++;
          arr[rear]=val;
        }



    }

    void pop(){
         //4 case-- overflow 1st element circular nature normal flow
         if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
         }
         else if(front == rear){
            //single element
            arr[front]=-1;
            front=-1;
            rear=-1;
         }
         else if(front==n-1){
            //circular nature
            arr[front]=-1;
            front=0;
         }
         else{
            //noraml case
            arr[front]=-1;
            front++;
         }

    }
   
    int getfront(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
            

        }
        else{
            return arr[front];
        }

    }

    int getsize(){
        if(front==-1 && rear==-1){
            return 0;
        }
       else if(rear>=front){
        return rear-front+1;
       }
       else{
        return n-front+rear+1;
       }

    }

    bool isempty(){
        if(front ==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }

    }

};
 
int main(){
     
     
    return 0; 
}