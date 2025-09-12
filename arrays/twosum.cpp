#include<bits/stdc++.h>
using namespace std;

pair<int, int> twosum(int arr[], int n, int target){
    //assuming(-1,-1) as no answer found
    pair<int,int>ans = make_pair(-1,-1);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] + arr[j]==target){
               // cout<<arr[i]<<","<<arr[j]<<endl;
               ans.first=arr[i];
               ans.second=arr[j];

                return ans;
            }
        }
    }

    return ans;
}
 
int main(){
     int arr[]={10, 5,20, 15, 30};
     int n=5;
     int target =35;

     pair<int,int> ans = twosum(arr , n, target);
     if(ans.first ==-1 & ans.second==-1){
        cout<<"pair not found"<<endl;
     }
     else{
        cout<<"pair  found : "<<ans.first<<","<<ans.second<<endl;
     }
    return 0; 
}