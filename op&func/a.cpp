#include<bits/stdc++.h>
using namespace std;


 
int main(){
     int number=5;
     int bitcount=0;

     while(number!=0){
        int lastdigit= number&1;
        if(lastdigit=1){
            bitcount=bitcount+1;
        }
        number=number>>1;
     }

     cout<<"total set bits:"<<bitcount;
    return 0; 
}