#include<bits/stdc++.h>
using namespace std;
 
int main(){
     map<int, string> table;

     table.insert(make_pair(3,"Rana"));
     table.insert(make_pair(2,"Bhanu"));
     table.insert(make_pair(1,"Pratap"));

     map<int, string> :: iterator it = table.begin();
     while(it!= table.end()){
        pair<int, string> p = *it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
     }
     
    return 0; 
}