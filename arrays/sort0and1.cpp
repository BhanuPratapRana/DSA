#include<bits/stdc++.h>
using namespace std;

void sort0and1(int arr[], int size){
    int count0=0;
    int count1 =0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            count0++;
        
        }
        if(arr[i]==1){
           count1++;
        }
    }

   // for insertion
    for(int i=0; i<count0; i++){
        arr[i]=0;
    }

     for(int i=count0; i<size; i++){
        arr[i]=1;
    }
//        fill(arr, arr+count0,0);
//    fill(arr+count1, arr+size,1);
    

}
 
int main(){
    
    int arr[]={0,1,1,0,0,1,1};
    int size=7;

  // sort0and1(arr , size);

  //inbiult function
   sort(arr,arr+size);


    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "; 
    }


    

   

     
    return 0; 
}