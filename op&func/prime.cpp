#include<bits/stdc++.h>
using namespace std;

bool isprime(int num){

    for(int i=2; i<=(num-1); i++){
        if(num%i ==0){
            //not prime
            return false;
        }
    }

    return true;
}

void printeveninsiderange(int start, int end){
    for(int i=start; i<=end; i++){
        int number=i;
        if(!(number&1)){
            cout<<number<<endl;
        }
       
    }

    
    
}
 
int main(){

//    bool ans = isprime(11);
//    if(ans==true){
//     cout<<"prime no.";
//    }

//    else{
//     cout<<"Not prime";
//    }

   printeveninsiderange(1, 10);
   

     
    return 0; 
}