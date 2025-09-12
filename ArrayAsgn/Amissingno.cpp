#include<bits/stdc++.h>
using namespace std;

int missingnoXORR(vector<int>&nums){             // T.C =O(N)
    int n = nums.size();
    int ans =0;

    //xorr all values of array
    for (int i = 0; i < n; i++)
    {
        ans= ans^nums[i];
    } 


    //2, xorr all range values[0,N]
    for (int i = 0; i <=n; i++)
    {
        ans = ans^i;
    }

    return ans;   
    

}
 
int main(){
     vector<int>nums={9,6,4,2,3,5,7,0,1};

    int missingno = missingnoXORR(nums);
    cout<<"missing no. is "<< missingno;
    return 0; 
}

