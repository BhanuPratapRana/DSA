#include<bits/stdc++.h>
using namespace std;
 
int main(){
     vector<int> first;
     first.push_back(1);
     first.push_back(2);
     first.push_back(3);
     first.push_back(4);

     vector<int> second;
     second.push_back(3);
     second.push_back(4);
     second.push_back(5);
     second.push_back(6);

     vector<int> result;
     vector<int> result2;
     vector<int> result3;
     vector<int> result4;

     set_union(first.begin(), first.end(), second.begin(), second.end(),inserter(result,result.begin()));

     for(int a: result){
        cout<<a<<" ";
     }cout<<endl;


     set_intersection(first.begin(), first.end(), second.begin(), second.end(),inserter(result2,result2.begin()));
     for(int a: result2){
        cout<<a<<" ";
     }cout<<endl;   

     set_difference(first.begin(), first.end(), second.begin(), second.end(),inserter(result3,result3.begin()));
     for(int a: result3){
        cout<<a<<" ";
     }cout<<endl;  

     set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(),inserter(result4,result4.begin()));
     for(int a: result4){
        cout<<a<<" ";
     }cout<<endl;  




    return 0; 
}