#include<bits/stdc++.h>
using namespace std;

//a[i] ko index mano
// eha jaakr -ve krdo --> if a[a[i]]>0,then a[a[i]]*-1

void findmissing(vector<int>& v){
    for(int i=1; i<v.size(); i++){
        //visiting with -1

        int index = abs(v[i]);
        //index within bound
        if(index < v.size() && v[index]>0){
            v[index] *= -1;
        }
        

    }
}
 
int main(){
      vector<int> v= {1, 3, 5, 3, 4};

     //making index 1 form 0
     v.insert(v.begin(), 0);

     //032 -> 0  no work
     //1 -> 1
     //3 -> 2


   //to check -ve array
    findmissing(v);
    //  for(int i=1; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    //  }
    //  cout<<endl;

     int missing = -1;
     for(int i=1; i<v.size(); i++){
        if(v[i] >0){
            missing = i ;
            break; 
        }
     }
      cout<<"missing no. is :"<<missing<<endl;

     

     
     
    return 0; 
}