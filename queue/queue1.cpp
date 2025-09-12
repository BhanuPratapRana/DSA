#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int *arr;
    int n;
    int front;
    int rear;

public:
    Queue(int size)
    {
        arr = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }

    void push(int val)
    {
        // overflow
        if (rear == n - 1)
        {
            cout << "overflow" << endl;
        }

        // inserting first element
        else if (rear == -1 && front == -1)
        {
            rear++;
            front++;
            arr[rear] = val;
        }
        else
        {
            // noraml case
            rear++;
            arr[rear] = val;
        }
    }

    void pop()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "underflow" << endl;
        }
        // single element
        else if (front == rear)
        {
            arr[rear] == -1; // optional
            front = -1;
            rear = -1;
        }
        else
        {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    int getFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (rear == -1)
        {
            cout << "Queue is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    int getSize()
    {
        // return no. of elements inside Queue
        if(rear==-1 && front ==-1){
            return 0;
        }
        else{
        return rear - front + 1;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q(5);
    q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // cout << q.getFront() << endl;

    cout << q.getSize() << endl;
    q.pop();
    q.pop();

    return 0;
}