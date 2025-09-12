#include<bits/stdc++.h>
using namespace std;

 int firstoccurence( int arr[], int n, int target, int &ansindex){
    int s=0; 
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<=e){
     if(arr[mid] == target){
        //ans found --> may or  may not be first occurence
        //store and compute

        ansindex = mid;
        e=mid -1;
     }

     if(target> arr[mid]){
        s =mid +1;
     }

     if(target< arr[mid]){
        e =mid-1;
     }

     // ye mein bhool jaata hun
     mid = s + (e-s)/2;
    }
}

 int lastoccurence( int arr[], int n, int target, int &anslastindex){
    int s=0; 
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<=e){
     if(arr[mid] == target){
        //ans found --> may or  may not be last occurence
        //store and compute

        anslastindex = mid;
        s=mid +1;
     }

     if(target> arr[mid]){
        s =mid +1;
     }

     if(target< arr[mid]){
        e =mid-1;
     }

     // ye mein bhool jaata hun
     mid = s + (e-s)/2;
    }
}
 
 
int main(){
     int arr[]={5,20, 20, 20,20, 20, 20, 20, 20, 30 ,40, 50};
     int n=11;
     int target =20;

     //-1 means target not found
     int ansindex =-1;
     int anslastindex =-1;

     firstoccurence(arr, n, target, ansindex);
     cout<<"first occurence index :"<<ansindex<<endl;

     lastoccurence(arr, n, target, anslastindex);
     cout<<"first occurence index :"<<anslastindex<<endl;

     int totaloccurrence = (anslastindex - ansindex) +1;
     cout<<"total occurrence is :"<<totaloccurrence<<endl;
     
    return 0; 
}