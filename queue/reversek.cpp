#include<bits/stdc++.h>
using namespace std;
void reversek(queue<int> &q, int k, int count){
    stack<int> s;
    //if k is more than n
    if(k>=count){
      //fetch k elements from q and insert in stack
        for(int i=0;i<k;i++){
        
        int element=q.front();
        q.pop();
        s.push(element);

        }

        //now put those k elements in queue
        for(int i=0;i<k;i++){
            int topE=s.top();
            s.pop();
            q.push(topE);

        }
        //1 case maine solve krlia baaki recursion dekh lega
        reversek(q,k,count-k);

    }
    //k is less than count
    //iska mtlb as it is q ke front se element utha kr
    // q ke back mein push krdo
    else{
        int element =q.front();
        q.pop();
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

     int k=3;
     int count=q.size();

    reversek(q,k,count);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
     
    return 0; 
}