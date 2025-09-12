#include<bits/stdc++.h>
using namespace std;

int peakindexmountainarray(vector<int>& arr){
    int s= 0;
    int n = arr.size();
    int e = n-1;
    int mid = s + (e-s)/2;
    int ansindex=-1;

    while(s<=e){
        if(arr[mid]<arr[mid+1]){
             s= mid+1;
        }
        else{
            ansindex = mid;
            e = mid-1;
        }
        
    }
    return ansindex;


   
}


 
int main(){
    vector<int> arr = {0,2,1,0};
    int ans = peakindexmountainarray(arr);

    cout<<"peak index is :"<<ans<<endl;
     
     
    return 0; 
}