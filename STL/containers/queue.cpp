#include<bits/stdc++.h>
using namespace std;
 
int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<q.size()<<endl;
    // 10 20 30 40

    //no clear in queue

    q.pop();

    if(q.empty() == true){
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue is not empty"<<endl;
    }

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //swap
    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);
    

    second.push(100);
    second.push(200);
  

    first.swap(second);

    cout<<first.front()<< " "<< first.back()<< endl;
    

     


    return 0; 
}