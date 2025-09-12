#include<bits/stdc++.h>
using namespace std;

bool checksort(stack<int>& s,int element1){
  //base case
  if(s.empty()){
    return true;
  }

  //recursive case
  int element2 = s.top();
  s.pop();
  if(element2<element1){
    //mtlb 
    bool aagekaans= checksort(s,element2);

    
    //backtrack
    s.push(element2);

    //return krene se pehle backtrack krna
    return aagekaans;

    
  }  
  else{
    return false;
  }
}
 
int main(){
     stack<int> s;
     s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int element1= INT_MAX;

   cout<< checksort(s,element1)<<endl;
     
    return 0; 
}