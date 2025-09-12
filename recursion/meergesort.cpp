#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e, int mid){
    // create left and right subarrays
    int leftlength =mid-s+1;
    int rightlength= e-mid;

    int *leftarr = new int[leftlength];
    int *rightarr = new int[rightlength];
    
    //fill left subarray
    int index=s;
    for( int i=0; i<leftlength; i++){
        leftarr[i]= arr[index];
        index++;
    } 
    //fill right subarray
    for(int i=0; i<rightlength; i++){
        rightarr[i]= arr[index];
        index++;
    }
    //merge logic
   int i=0, j=0;
    int mainarrindex =s;
    
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
    
    //clean up
    delete[] leftarr;
    delete[] rightarr;


}

void mergesort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }
    
    //recursive case
    int mid= s+(e-s)/2;
    //leftpart
    mergesort(arr,s,mid);
    //right part
    mergesort(arr, mid+1,e);
    //merge
    merge(arr, s,e,mid);

}
 
int main(){
     int arr[]={10,30,50,70};
    int arrsize=4;
    int s=0;
    int e =arrsize-1;
    mergesort(arr, s,e);

    cout<<"sorted array is :";
    for(int i=0; i<arrsize; i++){
        cout<<arr[i]<<" ";
    }
     
     
    return 0; 
}