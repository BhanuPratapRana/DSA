#include<bits/stdc++.h>
using namespace std;

int brutforce(vector<int>&nums){
    int n = nums.size();
    
    
    for(int i=0; i<n; i++){
        int leftsum =0;
    int rightsum =0;

        //left side sum excluding current index
        for(int j=0; j<i; j++){
            leftsum=leftsum+ nums[j];            
        }

        //right sum excluding current index
        for(int j=i+1; j<n; j++){
            rightsum=rightsum+ nums[j];            
        }

        if(leftsum==rightsum){
             return i;
        }
        
    }
    return -1;
}



 
int main(){
     vector<int> nums ={1,7,3,6,5,6};

    int pivot = brutforce(nums);
    cout<<"pivot index is :"<<pivot;
    


    return 0; 
}