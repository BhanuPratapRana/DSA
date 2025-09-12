#include<bits/stdc++.h>
using namespace std;


void fancy12pattern(int n){
    for(int i=0; i< n; i++){
        for(int j =0; j < 2*i+1; j++){
            

            if(j%2 == 0){
                cout<< i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;

    }
}



void invertedfancy12pattern(int n){
     for(int i=0; i< n; i++){
        for(int j =0; j < 2*(n-i)-1; j++){
            

            if(j%2 == 0){
                cout<< n-i;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;

    }
}

void fullfancy12pattern(int n){
    fancy12pattern(n);
    n--;
    invertedfancy12pattern(n);
}




 
int main(){
    int n;
    cout<< "enter the value of n:";
    cin >>n;
    fullfancy12pattern(n);
      
    return 0; 
}