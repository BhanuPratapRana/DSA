#include<bits/stdc++.h>
using namespace std;
 
int main(){
    map<int, string> om;
    unordered_map<int, string> um;

    //insertion
    //insert()
    //[]
    um[2]="scorpio";
    um[1]="bmw";
    um[3]="audi";

    om.insert({2, "scorpio"});
    om.insert({1, "bmw"});
    om.insert({3, "audi"});

    cout<<"printing unordered map :"<<endl;
    for(auto p: um){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    cout<<endl;

    cout<<"printing ordered map :"<<endl;
    for(auto p: om){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    cout<<endl;

    //seaching
    //find() and count()
    //find --> return iterator to the key value pair
    //if key not found, return iterator to map.end()
    if(um.find(1) != um.end()){
        cout<<" found"<<endl;
    }
    else{
        cout<<"NOT found "<<endl;
    }

    //count --> return 1 if key is present
    //else return 0
    if(um.count(4)){
        cout<<"found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    
     
     
    return 0; 
}