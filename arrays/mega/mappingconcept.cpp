#include<bits/stdc++.h>
using namespace std;
 
int main(){
     unordered_map<int,int> deskmap;  //roll no. , desk no.

     deskmap[1]=53;
     deskmap[2]=54;
     deskmap[3]=55;
     deskmap[4]=56;


     //iterate
    //  unordered_map<int, int> :: iterator it = deskmap.begin();
    //  while (it != deskmap.end())
    //  {
    //     int key= it->first;
    //     int value = it-> second;
    //     cout<< "key :"<<key <<" "<< "value :"<< value<< endl;
    //     it++;
    //  }

    //  cout<<endl;
     

     //another syntax 
     //for each loop

     //auto ---> unordered_map<int, int> :: iterator 
     for(auto it: deskmap){
         int key= it.first;
        int value = it.second;
        cout<< "key :"<<key <<" "<< "value :"<< value<< endl;
        
     }

     cout<<endl;


     //find?
     //table mein very first ----> avg case o(1) ,  worst case-->o(n)

     if(deskmap.find(2) !=deskmap.end()){
        //found
        int value =  deskmap[2];
        cout<<"value found :"<<value<<endl;
     }

     else{
        //not found
        cout<<"not found"<<endl;
     }

     //deletion by key only
     deskmap.erase(2);
     cout<<endl;

     cout<<"after erase"<<endl;

     unordered_map<int, int> :: iterator it;
     for(it = deskmap.begin(); it != deskmap.end(); it++){
        int key = it->first;
        int  value =it-> second;

        cout<<"key :"<<key<<" "<<"value :"<<value<< endl;
     }
     cout<<endl;

     cout<<"find 2 again"<<endl;
     if(deskmap.find(2) != deskmap.end()){
        //found
        int value= deskmap[2];
        cout<<"value found:" <<value<<endl;
     }

     else{
        //not found
        cout<<"value not found"<<endl;
     }
     
    return 0; 
}