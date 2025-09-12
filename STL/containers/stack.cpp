#include<bits/stdc++.h>
using namespace std;
 
int main(){
     stack<int> st;

     //insertion
     st.push(10);
     st.push(20);
     st.push(30);

     cout<<st.size()<<endl;

     st.pop(); //30

    cout<< st.top()<<endl;

    if(st.empty() == true){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    stack<int> first;
    stack<int> second;

    first.push(1);
    first.push(2);
    first.push(3);

    second.push(10);
    second.push(20);
    second.push(30);

    first.swap(second);
    
    cout<<first.top();





    return 0; 
}