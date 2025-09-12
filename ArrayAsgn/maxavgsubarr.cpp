//643
#include<bits/stdc++.h>
using namespace std;

//sliding window method   (tc - o(n))
double slidingwindow(vector<int>& nums, int&k){
    int i=0;
    int j=k-1;
    int sum =0;
    int max_sum = INT_MIN;

    for(int y=i; y<=j; y++){
        sum = sum+nums[y];
    }
         max_sum = sum;
       j++;

       while (j<nums.size())
       {
        sum= sum - nums[i];
        i++;
        sum= sum+ nums[j];
        j++;
         max_sum=max(max_sum,sum);

       }
       

    
    double max_avg = max_sum/double(k);
    
return max_avg;

}




//brutforce method
double brutforce(vector<int>& nums, int&k){
    int maxsum = INT_MIN;
    int i=0;
    int j=k-1;

    while (j<nums.size())
    {
        int sum=0;
        for (int y= i; y <=j; y++)
        {
            sum += nums[y];
            maxsum= max(maxsum, sum); 
        }++j;++i; 
        
    }
     double maxavg = maxsum/double(k);


     return maxavg;
    


}
 
int main(){
    vector<int> nums ={1,12,-5,-6,50,3};
    int k;
    cout<<"enter the value of k";
    cin>>k;

    // double avgmax = brutforce(nums, k);
    // cout<<avgmax;

    double avg_max = slidingwindow(nums, k);
    cout<<avg_max;
     
     
     
    return 0; 
}