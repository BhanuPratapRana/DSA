#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int size){
     int start =0;
    int end = size-1;


 while(start<end){
        //swap(arr[start], arr[end]);
        arr[start]=arr[start]^arr[end];
        arr[end]=arr[end]^arr[start];
        arr[start]=arr[start]^arr[end];
         
        start++;
        end--;
 }

}
 
int main(){

    int arr[]= {10, 20, 30, 40 ,50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
   
   
    reversearray(arr,size);
for(int i=0; i<size; i++){
    cout<<arr[i]<<" "<<endl;;
}
     
    return 0; 
}