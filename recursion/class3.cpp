#include<bits/stdc++.h>
using namespace std;

bool checksort(int arr[], int size, int index){
    //base case
    if(index=size-1){
        return true;
    }
    //recursive case
    if(arr[index]<arr[index+1]){
        return checksort(arr, size, index+1);
    } else {
        return false;
    }
    return true; // This line is unreachable but added to satisfy the function's return type
}
 
int main(){
     int arr[]={10, 20, 30, 40, 50};
     int size=5;
     int index=0;

     bool ans = checksort(arr, size, index);
        if(ans){
            cout<<"Array is sorted --"<<ans<<endl;
        } else {
            cout<<"Array is not sorted --"<<ans<<endl;
        }
     
    return 0; 
}