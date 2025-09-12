#include<bits/stdc++.h>
using namespace std;

void countelements(int arr[], int size, int &count0, int &count1){
    for( int i=0; i<size; i++){
        if(arr[i]==0){
           count0++;
        }
        if(arr[i]==1){
           count1++;
        }
    }
    
}


 
int main(){
     int arr[7] ={0, 1, 1, 1, 0, 0, 1};
     int size =7;
     int count0=0;
     int count1=0;

     countelements(arr, size ,count0, count1);
     cout<<"count of 0 is :"<<count0<<endl;
     cout<<"count of 1 is :"<<count1<<endl;

    return 0; 
}