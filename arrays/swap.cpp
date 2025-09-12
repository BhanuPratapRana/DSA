#include<bits/stdc++.h>
using namespace std;
 
int main(){
     //different methods of swap
     int a=5;
     int b=6;

    //  swap(a,b);   use this method


     //2method
    //  int temp =a;
    //  a=b;
    //  b=temp;


     //3 method arithmetic method

    //  a= a+b;
    //  b=a-b;
    //  a=a-b;

     //xor bitwise mthod
     a=a^b;  //a=3
     b=b^a; //b=5
     a=a^b ;//a=6 b=5
      


     cout<<"a--"<<a<<" "<<"b--"<<b;
    return 0; 
}