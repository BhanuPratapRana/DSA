#include<bits/stdc++.h>
using namespace std;
 
int main(){
    deque<int> dq;

    //insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);

    //removal
    dq.pop_front();
    dq.pop_back();

    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

if(dq.empty() == true){
    cout<<"deque is empty";
}
else
{
    cout<<"deque is not empty";
}cout<<endl;

deque<int> :: iterator it = dq.begin();

while(it!= dq.end()){
    cout<<*it<<' ';
    it++;
}

cout<<dq[0]<<endl;
cout<<dq.at(3)<<endl;

//dq.clear()

dq.insert(dq.begin(),(10));

//dq.erase(dq.begin(), dq.end());

deque<int> first;
deque<int> second;

first.push_back(10);

second.push_back(100);

first.swap(second);

     

    return 0; 
}