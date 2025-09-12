#include<bits/stdc++.h>
using namespace std;

bool twopointerapproach(int arr[], int n, int x){
     int l=0;
     int h =n-1;
    while(l<h){
        int csum = arr[l]+ arr[h];

        if(csum==x){
            return true;
        }

        else if(csum>x){
            h--;
        }

        else{
            l++;
        }

    }
    return false;

}

bool twosumapproach(int arr[], int n, int x){
     

     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        if(arr[i] + arr[j] == x){
            return true;
        }
     }
     }

     return false;
    

}
 
int main(){
     int arr[]= {1, 4, 45, 6, 10, 8};
     int n =6;
     int x;

     sort(arr, arr+n);

     for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
     }
    
      cout<<"Enter the value of x :";
     cin>> x;

    bool ans2 = twopointerapproach(arr, n,x);
    cout<<ans2;

    //  bool ans = twosumapproach(arr, n,x);
    //  cout<<ans;


    
    return 0; 
}