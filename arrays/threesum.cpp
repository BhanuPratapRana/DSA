#include<bits/stdc++.h>
using namespace std;

void threesum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
                }
            }
        }
    }

}
 
int main(){
    int arr[]={1, 0, -1, 2, -1, -4};
    int n=6;
    int target =0;

    threesum(arr, n, target);
     
    return 0; 
}