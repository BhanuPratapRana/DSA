#include<bits/stdc++.h>
using namespace std;

void rotatearray(int arr[],int size, int n ){ 
n= n % size;

        if(n==0){
          //no need to do anything
        return;
    }

    //step1: copy last n elements  into a temp array
int temp[n];
int index =0;
for(int i=size-n; i<size; i++){
 temp[index] = arr[i];
 index++;
}


//step2: shift array elemnts by n places
for(int i=size; i>=n; i--){
    if(i-n>=0){   // valid index 
    arr[i] = arr[i- n];
    }
}

//step3: copy temp elements to original array
for(int i=0; i<n; i++){
    arr[i]= temp[i];
}

}


   

 
int main(){
     int arr[]={10, 20, 30 ,40, 50, 60};
     int size=6;

     //cyclic rotate elwmnts by 2 places
     int n =2;
        
        cout<<"before : ";
       for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

     rotatearray(arr, size, n);

      cout<<"after : ";
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0; 
}