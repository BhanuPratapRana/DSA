#include<bits/stdc++.h>
using namespace std;
 

 void abcba(int n){
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j =0; j<i+1; j++){
            cout <<ch;
            ch++;

        }
       

        ch--;

        while(ch>'A'){
            ch--;
            cout <<ch;
           
        }

         cout << endl;
    }
 }


int main(){
    int n;
    cout<<"enter the value of n:";
    cin>> n;
    abcba(n);
 
    return 0; 
}