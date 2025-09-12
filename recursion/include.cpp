#include<bits/stdc++.h>
using namespace std;

void printsubsequences(string str, int index, string output){
    //base case
    if(index == str.length()){
        cout<<output << endl;
        return;
    }
    char ch = str[index];
    //recursive case
    //ek case main solve karung , baaki recursion sambhaal lega
    //inlude
    printsubsequences(str, index+1,output + ch);
    //exclude
    printsubsequences(str, index+1, output);

}
 
int main(){
     string str ="abc";
     string output;
     int index =0;

     printsubsequences(str, index,output);
        cout<<"All subsequences printed."<<endl;
         
     
    return 0; 
}