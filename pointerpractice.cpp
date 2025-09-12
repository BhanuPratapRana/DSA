#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s ="abc";

    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){
            string sub = s.substr(i, j-i+1);
            cout<<sub<<endl;
        }
    }


     
    return 0; 
}