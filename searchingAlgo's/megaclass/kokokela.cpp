#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:

    bool cankokofinishbananawithKspedd(vector<int>& piles, int h, int k){
        long long int totalHours = 0;
        for(int i=0; i<piles.size(); i++){
            // calculate the hours needed to finish the current pile with speed k
            totalHours += ceil((double)piles[i] / k);
        }
        if(totalHours<=h){
            return true;
        }
        else
        return false;
    }


    //Time Complexity: O(N * log M) where N = number of piles, M = max element in piles
    
    

    int minEatingSpeed(vector<int>& piles, int h) {
        int s =1;
        int e = *max_element(piles.begin(), piles.end());
        int ans=0;

        while(s<=e){
            int mid = s+(e-s)/2;
            int k =mid;
            

            if(cankokofinishbananawithKspedd(piles, h, k)){
                ans = mid; // store and compute
                e = mid - 1; // try to find a smaller speed
            }
            else{
                s = mid + 1; // increase speed
            }         
        

        }
        return ans;
        
    }
};
 
int main(){
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    Solution sol;
    int result = sol.minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;

     
     
    return 0; 
}

