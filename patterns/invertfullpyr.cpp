#include<bits/stdc++.h>
using namespace std;

void invertfullpyramid(int n){
    
     for(int row =0; row <n; row++){
        //spaces
        for(int col =0; col <row; col++){
            cout <<" ";
        }

        //stars
        for(int col = 0; col < n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
     }

}
 
int main(){
     int n;
     cout<<"enter the value of n:";
     cin >>n;
     invertfullpyramid(n);



    return 0; 
}