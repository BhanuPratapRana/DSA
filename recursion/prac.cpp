#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e, int mid){
    //create left and reigt sub arrays
    int leftlength =mid-s+1;
    int rightlength =e-mid;

    int *leftarr =new int[leftlength];
    int *rightarr =new int[rightlength];

    //fill arrays
    int index=s;
    for(int i=0;i<leftlength;i++){
        leftarr[i]=arr[index];
        index++;
    }
    for(int i=0;i<rightlength;i++){
        rightarr[i]=arr[index];
        index++;
    }

    //merge logic
    int i=0,j=0;

    int mainarrindex=s;
    while(i<leftlength && j<rightlength){
        if(leftarr[i]<rightarr[j]){
            arr[mainarrindex]=leftarr[i];
            i++;
            mainarrindex++;
        }
        else{
            arr[mainarrindex]=rightarr[j];
            j++;
            mainarrindex++;
        }
    }
    //copy remaining elements
    while(i<leftlength){
        arr[mainarrindex]=leftarr[i];
            i++;
            mainarrindex++;
    }
    while(j<rightlength){
        arr[mainarrindex]=rightarr[j];
            j++;
            mainarrindex++;
    }

}

void mergesort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //recursive case
    int mid =s+(e-s)/2;
    //left part
    mergesort(arr, s,mid);
    //right part
    mergesort(arr, mid+1,e);
    //merge two parts
    merge(arr, s,e,mid);

}
 
int main(){
     int arr[] = {12, 11, 13, 5, 6, 7};
     int n = sizeof(arr)/sizeof(arr[0]);
     int s=0;
     int e=n-1;

     mergesort(arr, s,e);
    //print sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
     
    return 0; 
}