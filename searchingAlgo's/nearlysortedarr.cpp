#include<bits/stdc++.h>
using namespace std;
//nearly sorted array question

int applybinarysearch(int arr[], int size, int target){
    int s=0;
    int e = size - 1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1>=s && arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1<=e && arr[mid+1]==target){
            return mid +1;

        }
        if(arr[mid]<target){
            s = mid+2; 
        }
        else{
            e = mid -2;
        }
        //ye main bhool jata hun pr iss baar yaad tha 
        mid = s+(e-s)/2;
    }
    return -1; // target not found

}

int main(){
    int arr[]={10, 3, 40, 20, 50, 80, 70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target =10;

    int ans =  applybinarysearch(arr, size, target);
    cout <<"the target is found at index:"<<ans <<endl;


    return 0;
}