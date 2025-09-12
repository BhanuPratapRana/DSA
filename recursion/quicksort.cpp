#include<bits/stdc++.h>
using namespace std;

//tc-- O(n^2)
//avg tc-- O(nlogn)
void quicksort(int arr[], int start, int end){
    if(start>=end){
        return ; // base case 
        }
    //partitioning logic
        int pivot = end; // choosing last element as pivot
        int i=start-1;
        int j =start;

        while(j<pivot){
            if(arr[j]<arr[pivot]){
                i++;
                swap(arr[i],arr[j]);
            }
            
                j++;
            
        }
        //swap pivot to the correct position 
         i++;
        // now i is the index where pivot should be placed
        swap(arr[i], arr[pivot]);
        //recursive calls
        //left part
        quicksort(arr, start,i-1 );
        //right part
        quicksort(arr,i+1,end);
        
}

 
int main(){
     int arr[]={5,2,8,1,3};
     int n = sizeof(arr)/sizeof(arr[0]);
     int start=0;
     int end=n-1;

     quicksort(arr,start,end);
        //print sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
     
    return 0; 
}