#include<bits/stdc++.h>
using namespace std;
 
int main(){
     

     vector<int> marks;
     marks.reserve(10);
     cout<<marks.max_size()<<endl;

     //cout<<*marks.begin()<<endl;

     marks.push_back(10);
     marks.push_back(20);     
     marks.push_back(30);
     marks.push_back(40);
     marks.push_back(50);

     cout<<"size :"<<marks.size()<<endl;

     //marks.pop_back();

     cout<<marks.front()<<endl;
     cout<<marks.back()<<endl;

     if(marks.empty() == true){

        cout<<"vector is empty";
 
     }
     else cout<<"vector is not empty"<<endl;

     cout<<marks[0]<<endl;
     cout<<marks.at(0)<<endl;
     cout<<marks.capacity()<<endl;
     
     
     //marks.clear();   ALL CLEAR
     marks.insert(marks.begin(),2);

    //  marks.erase(marks.begin(),marks.end());

     vector<int> first;
     vector<int> second;

     first.push_back(10);
     first.push_back(20);
     first.push_back(30);

     second.push_back(100);
     second.push_back(200);
     second.push_back(300);

     //first.swap(second);

     for(int i: first){
        cout<<i<<" ";
     }

     //traversing the vector using iterator

     //create an iterator
     vector<int> :: iterator it = first.begin();

     while(it != first.end()){
        cout<< *it<< " ";
        it++;
     }

     

     vector<vector<int>> arr( 4,  vector<int>(3,0));

   //  2D array        variable  (no of rows =4,   hr ke row mein kya hoga)
   //                                            3 = row ka size

   int totalrows = arr.size();
   int totalcolumns = arr[0].size();


   //jaggerred vector
   vector<vector<int>> brr(4);
   brr[0] = vector<int>(4);
   brr[1] = vector<int>(2);
   brr[2] = vector<int>(5);
   brr[3] = vector<int>(2);
  








      


    return 0; 
}