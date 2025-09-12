//75
#include<bits/stdc++.h>
using namespace std;

//sorting function tc--> o(nlogn)
//                  sc --> o(n)

void inplacesort(vector<int>&arr){
    int n=arr.size();
    int l=0;
    int m=0;
    int h=n-1;

    while( m<=h){
        
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            l++;m++;
        }

        else if(arr[m]==1){
            m++;
        }

        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

}





void sortcolorscountfunc(vector<int>&arr){   //tc --> o(n)   sc--->o(1)
    int n =arr.size();
    int count0=0;
    int count1=0;
    int count2=0;


    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count0++; 

        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }

    //spread
    int i=0;
    while (count0--)
    {
        arr[i]=0;
        i++;
    }
    
    while (count1--)
    {
        arr[i]=1;
        i++;
    }
    
    while (count2--)
    {
        arr[i]=2;
        i++;
    }
    
}
 
int main(){
     vector<int> arr={2,0,2,1,1,0};
     int n=arr.size();
     // sortcolorscountfunc(arr);
     inplacesort(arr);
     for (int i = 0; i < n; i++)
     {
       cout<< arr[i]<<" ";
     }
     
     
     
    return 0; 
}