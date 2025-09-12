#include<bits/stdc++.h>
using namespace std;


//method 1 not so much effective 
int sortingmethod(vector<int>&nums){
    int n = nums.size();

    sort(nums.begin(), nums.end());   //o(nlogn)

    for(int i=0; i<n;i++){ //o(n)                           t.c = o(nlogn)
        if(i==nums[i]){
            continue;
        }

        else return i;
    }
    return n;
}
 
int main(){
    vector<int>nums={9,6,4,2,3,5,7,0,1};

    int missingno = sortingmethod(nums);
    cout<<"missing no. is "<< missingno;
     
    return 0; 
}