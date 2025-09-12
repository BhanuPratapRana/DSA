#include<bits/stdc++.h>
using namespace std;
 
int main(){
     //creation
     priority_queue<int> pq;

     //min heap creation
     //min heap -> min vlue = highest priority
     priority_queue<int, vector<int>, greater<int> > pq1;
     pq1.push(10);
     pq1.push(120);
     pq1.push(100);

     cout<<"min heap priority :"<<pq1.top()<<endl;
     pq1.pop(); 

     //max heap -> max val = highest priority

     pq.push(10);
     pq.push(30);
     pq.push(20);
     pq.push(100);

     cout<<pq.top()<<endl;
     pq.pop();  //100 will be popped

       if(pq.empty() == true){
        cout<<"Pqueue is empty"<<endl;
    }
    else
    {
        cout<<"Pqueue is not empty"<<endl;
    }cout<<endl;


    



    return 0; 
}
