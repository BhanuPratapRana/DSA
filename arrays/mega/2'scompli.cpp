#include<bits/stdc++.h>
using namespace std;

vector<int> findcomplement(vector<int> binary){
    int n= binary.size();

    vector<int> twoscomp(n+1, 0);

    //step 1 flip the bits
    for(int i=n-1, k=twoscomp.size()-1; i>=0; i--,k--){

        //twoscomp[k]= binary[i]==0 ?1 :0;


        if(binary[i]==0){
            twoscomp[i+1]=1; 
        }
        else{
            twoscomp[i+1]=0;
        }
    }

    //step2 +1 in binary 
    int carry=1;
    for (int i = twoscomp.size()-1; i >=0; i--)
    {
    
       int sum =  twoscomp[i] +carry;
       twoscomp[i]=sum%2;
       carry= sum/2;

    }

    if(carry==1){
        twoscomp[0]=1;
    }

      return  twoscomp;
}
 
int main(){
vector<int> binary ={1,1,1,0,1,0,1,1,0};
vector<int> twoscomp = findcomplement(binary);

for(int i=0; i<twoscomp.size(); i++){
    cout<<twoscomp[i];
   
}
 cout<<endl;
     
    return 0; 
}