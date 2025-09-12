#include<bits/stdc++.h>
using namespace std;
 
int main(){
     //creation
     unordered_map<string, string> table;  // tc o(1)
    // map<string, string> table; //tc o(logn)


     //insertion
     table["in"] = "india";

     table.insert(make_pair("en","england"));

     pair<string, string> p;
     p.first = "br";
     p.second = "brazil";
     table.insert(p);

     cout<<table.size()<<endl;
     // table.clear();


     cout<<table.at("in")<<endl;
     // to update method 1
     table.at("in")="india2";     
     cout<<table.at("in")<<endl;

     table["in"]="india3";
      cout<<table.at("in")<<endl;

      unordered_map<string, string> :: iterator it =table.begin();
      while (it != table.end())
      {
        pair<string, string> p =*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
      }

      // Most Important Find and Count
      if(table.find("in") != table.end()){
        cout<<"key found"<<endl;
      }
      else{
        cout<<"key not found"<<endl;
      }

      //count
      if(table.count("in")==0){
        cout<<"key not found"<<endl;
      }
      else{
        cout<<"key found"<<endl;
      }
      



     if(table.empty()==true){
        cout<<"map is empty"<<endl;
     }
     else{
        cout<<"map is not empty"<<endl;
     }

     //table.erase(table.begin(),table.end());
     
    return 0; 
}