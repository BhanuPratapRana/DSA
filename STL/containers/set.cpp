//set store unique elements only
//two types
//1. unorderd set     tc ->o(1)
//2. ordered set      tc --> o(logn)

#include<bits/stdc++.h>
using namespace std;
 
int main(){
     set<int> st;
     st.insert(10);
     st.insert(15);
     st.insert(8);
     st.insert(4);
     
     //traverse
     set<int> :: iterator it =  st.begin();
     while(it!= st.end()){
        cout<<*it<<" ";
        it++;
     }

     cout<<st.size()<<endl;

     //st.clear();

     if(st.empty()){
      cout<<"set is empty"<<endl;
     }
     else{
      cout<<"set is not empty"<<endl;
     }

     //st.erase(st.begin(), st.end());
     cout<<st.size()<<endl;

     //find and count
     if(st.find(4) != st.end()){
      cout<<"found"<<endl;
     }
     else 
     {cout<<"not found"<<endl;}

     //count
     if(st.count(1)==1){
      cout<<"found"<<endl;
     }
     else cout<<"not found"<<endl;






    return 0; 
}