#include<bits/stdc++.h>
using namespace std;

 void numericinvertedhollowpyr(int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(i==0||j==n|| j==i+1){
            cout<<j<<" ";
            }
            else
                cout<<"  ";
            
        }
        cout<<endl;
    }

 }
 
int main(){
     int n;
     cout<<"enter the value of n:";
     cin>>n;
     numericinvertedhollowpyr(n);
    return 0; 
}