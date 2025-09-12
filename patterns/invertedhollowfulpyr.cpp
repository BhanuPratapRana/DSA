#include<bits/stdc++.h>
using namespace std;

void invertedhollowfullpyramid(int n){
    
     for(int row =0; row <n; row++){
        //spaces
        for(int col =0; col <row; col++){
            cout <<" ";
        }

        //stars
        for(int col = 0; col < n-row; col++){
            if(row ==0|| row==n-1||col==0 || col ==n-row -1){
            cout<<"* ";
        }
        else{
            cout<< "  ";
        }
        
        }
        cout<<endl;
     }

}
 
int main(){
     int n;
     cout<<"enter the value of n:";
     cin >>n;
     invertedhollowfullpyramid(n);



    return 0; 
}