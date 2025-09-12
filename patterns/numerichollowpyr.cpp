#include<bits/stdc++.h>
using namespace std;
 
void numerichollowpyramid(int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<i+1; j++){
            if(i==j || i==n-1|| j==0){
            cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<" enter the value of n";
    cin>>n;
    numerichollowpyramid(n);
     
    return 0; 
}