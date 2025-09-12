#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<"enter the value at index :"<<i<<endl;
        cin>>arr[i];'\n';

    }

    cout<<"elements of the array are:"<<endl;
    for(int i=0;i<size; i++){
        
        cout<<arr[i]<<endl;
    }
}


void extremepoints(int arr[], int size){
    int i=0;
    int j=size -1;

    while(i<=j){

        if(i==j){
            cout<<arr[i]<<endl;
            i++;
        }
        else{
        cout<<arr[i]<<endl;
        i++;
        cout<<arr[j]<<endl;
        j--;
        }
    }
}
 
int main(){
     int arr[10] ;
     int size ;
     cout<<"enter the no. of elements of the array :";
     cin>>size;
     
     printarray(arr ,size);
     

     cout<<"extreme points are :"<<endl;

     extremepoints(arr, size);

     
    return 0; 
}