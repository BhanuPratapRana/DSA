#include<bits/stdc++.h>
using namespace std;

//remove duplicate from sorted array


int removeduplicate(vector<int>&nums){
    int n = nums.size();
    //two pointer approach
    int j=0;
    int i=1;

    for (int i = 0; i < n; i++)
    {    
        //duplicate no.s 
        if(nums[i]==nums[j]){
            i++;
        }

        //if no.s are different 
        else{
            //professional
            nums[++j]=nums[i++];




            // j++;  rookie
            // nums[j]=nums[i];
            // i++;
        }
        
    }
    return j+1;
    
}
 
int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};

    //k - unique no. index

    int k = removeduplicate(nums);
    cout<<k;
     
    return 0; 
}