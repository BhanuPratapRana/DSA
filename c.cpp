#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
     cout<< "enter the value of n this is:";
    cin >> n;

    for(int row=0; row < n; row++){
        for( int col =0; col<row+1;col++ ){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}