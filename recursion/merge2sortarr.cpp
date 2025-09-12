#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr[], int arrsize, int brr[], int brrsize, vector<int> &ans){
    int i = 0, j = 0;
    while(i < arrsize && j < brrsize){
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        } else {
            ans.push_back(brr[j]);
            j++;
        }
    }
    // If there are remaining elements in arr
    while(i < arrsize){
        ans.push_back(arr[i]);
        i++;
    }
    // If there are remaining elements in brr
    while(j < brrsize){
        ans.push_back(brr[j]);
        j++;
    }
}

 
int main(){
     int arr[]={10,30,50,70};
    int arrsize=4;
    
    int brr[]={20,40,60,80,90,100};
    int brrsize=6;

    vector<int> ans;


    mergesort(arr, arrsize, brr, brrsize, ans);
    cout<<"Merged sorted array is: ";
    for(int num : ans){
        cout<<num<<" ";
    }

 
     
    return 0; 
}