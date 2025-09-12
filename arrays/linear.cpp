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

bool findtarget(int arr[], int size, int target){
    for(int i=0; i<size; i++){

        if(arr[i]==target){

            return true;
        }
    }

return false;

}


 
int main(){
     int arr[10];
     int size;
     cout<<"enter the no. of elements of the array :";
     cin>>size;
     int target =50;
     printarray(arr ,size);
     cout<<"ans is :";
     bool ans = findtarget(arr ,size, target);
     cout<<ans;


    return 0; 
}