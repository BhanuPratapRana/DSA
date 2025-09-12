#include<bits/stdc++.h>
using namespace std;

class functorone
{
public:
   bool operator()(int a, int b){
    //descending orderr mein compare krna chahte ho
    // a>b -> true 
    return a>b;
   }
};



 
int main(){

    functorone cmp;

      //object ko function ki trh use kr rhe hain
      if (cmp(10,5) == true)
      {
        cout<<"10 is greater than 5";
      }
      else{
        cout<<"10 os less than 5";
      }


     
     
     
    return 0; 
}