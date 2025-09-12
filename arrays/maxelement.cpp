#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<"enter the value at index :"<<i<<endl;
        cin>>arr[i];

    }

    cout<<"elements of the array are:"<<endl;
    for(int i=0;i<size; i++){
        
        cout<<arr[i]<<endl;
    }
}

int findmax(int arr[], int size){
    int maxans = INT_MIN;
    //int maxans = arr[0];
    for(int i=0; i<size; i++){
       // maxans = max(maxans ,arr[i]);
       if(arr[i]>maxans){
        maxans= arr[i];
       }
    }

    return maxans;
}
 
int main(){
     int arr[10];
     int size;
     cout<<"enter the no. of elements of the array :";
     cin>>size;
     
     printarray(arr ,size);

     cout<<"max elemnt is :";
     int maxelement = findmax(arr , size);
     cout<<maxelement;
     


    return 0; 
}