// lc 53
//very imp
#include<bits/stdc++.h>
using namespace std;

//brutforce  tc-->o(n^2)
int brutforcemaxsubarr( vector<int> &nums){
    int n= nums.size();
    int ans = INT_MIN;
    
    for(int i =0; i<n; i++){
        int sum =0;   
        for(int j=i; j<n; j++){           
           sum= sum + nums[j];

           ans= max(ans, sum);
        }
    }

return ans;

}

//famous algo tc-->o(n)  sc-->o(1)
int kadenalgo( vector<int> &nums){
    int ans =INT_MIN;
    for(int i=0; i<nums.size();i++){
        int num = nums[i];
        int sum = sum+num;
        ans = max(ans, sum);

        if(sum<0){
            sum =0;
        }

                
    }
    return ans;


}
 
int main(){
    vector<int> nums={-2, 1,-3, 4, -1,2,1,-1, -4};

    int ans =brutforcemaxsubarr(nums);
    cout<<"brut force ans :"<<ans<<endl;

     int answer =kadenalgo(nums);
    cout<<"max subarr ans :"<<ans;
      
     
    return 0; 
}