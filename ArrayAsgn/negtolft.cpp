#include<bits/stdc++.h>
using namespace std;



//dutch national flag algo rithm
void movenegativetoleft(vector<int>&nums){    //tc --->o(n)  sc-->o(1)
    int l=0;
    int m=0;
    int n=nums.size();
    while(m<n){
        if(nums[m]>=0 ){
            m++;
        }
        else{
            swap(nums[m],nums[l]);
            m++;l++;
        }
    }
}
 
int main(){
     vector<int> nums={-1,2,-3,4,-5,6,0,-5,34,-7};
     int n= nums.size();
     movenegativetoleft(nums);
     for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
     }
     
    return 0; 
}