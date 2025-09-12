#include<bits/stdc++.h>
using namespace std;

int singleno(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());   //O(nlogn)

    int ans = -1;
    int i=0;
    while(i<n){
        if(i+1<n && arr[i]==arr[i+1]){
            i+=2;
        }
        else{
            ans = arr[i];
            break;
        }
    }
    return ans;
}

int xormethod(vector<int>& arr){
    int n = arr.size();
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
 
int main(){
     vector<int> arr={4,1,2,1,2};

     int ans = singleno(arr);
        cout<<"Single number is :"<<ans<<endl;
     
     int ans = xormethod(arr);
        cout<<"Single number is :"<<ans<<endl;
    return 0; 
}