#include <bits/stdc++.h>
using namespace std;

int getpivot(vector<int> &nums)
{
    int s = 0;
    int n = nums.size();
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid + 1 < n && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        if (nums[mid] < nums[0])
        {
            e = mid - 1;
            // move to left
        }
        else
        {
            s = mid + 1;
            // move to right
        }
        mid = s + (e - s) / 2;

       
    }
     return -1; // pivot not found
}

int binarysearch(vector<int> &nums, int target, int s, int e)
{
    
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        if (target > nums[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;

        }
    }
    return -1; // target not found
}

int search(vector<int> &nums, int target)
{
    int pivotindex = getpivot(nums);
    if (target >= nums[0] && target <= nums[pivotindex])
    {
        // binary search in left
        int ans = binarysearch( nums, target,0, pivotindex); 
        return ans;
    }
    else
    {
        // binary search in right
        int ans = binarysearch( nums, target, pivotindex + 1, nums.size() - 1);
        return ans;
    }
    return -1; // target not found
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int ans = search(nums, target);
    cout << "Index of target " << target << " is: " << ans << endl;

    return 0;
}