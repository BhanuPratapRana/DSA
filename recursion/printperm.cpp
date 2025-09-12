#include<bits/stdc++.h>
using namespace std;
void printpermutaion(string &str, int i){
    //base case
    if(i>=str.length()){
        cout<<str<<endl;
        return;
    }

    //recursive case
    //1 case hm solve krenge baaki recursion sambhaal lega

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        printpermutaion(str,i+1);

        //when pass by reference --backtrack
        swap(str[i],str[j]);
        
    }
}

int main(){
    string str="abc";  
    int i =0;
    printpermutaion(str,i); 
    return 0;
}