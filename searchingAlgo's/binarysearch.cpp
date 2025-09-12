#include<bits/stdc++.h>
using namespace std;

// TIME COMPELEXITY ----> O(logn)

int binarysearh(vector<int>&arr, int target){
    int n= arr.size();
    int s=0;
    int e=n-1;
    // int mid = (s+e)/2;   out of range problem
    int mid = s + (e-s)/2;

    while(s<=e){
        if (arr[mid]==target)
        {
            return mid;
        }

        else if(target > arr[mid]){

            s = mid +1;
        }

        else if (target < arr[mid])
        {
            e= mid -1; 
        }

        //ye mein bhool jaata hun
        //mid = (s+e)/2;
         mid = s + (e-s)/2;
        
    }
    //element not found
    return -1;
}
 
int main(){
     vector<int> arr ={-1,0,3,5,9,12};
    //  int n =arr.size();
     
     int target =9;
     int ans = binarysearh(arr , target);
     cout<<"index is :"<<ans<<endl;

    bool STLans = binary_search(arr.begin(), arr.end(), target);
    cout<<"By using STL :"<<STLans;

     
    return 0; 
}