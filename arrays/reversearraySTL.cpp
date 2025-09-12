#include<bits/stdc++.h>
using namespace std;
 
int main(){
      int arr[]= {10, 20, 30, 40 ,50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, arr+size);
   
   

for(int i=0; i<size; i++){
    cout<<arr[i]<<" "<<endl;;
}
     
    return 0; 
    return 0; 
}