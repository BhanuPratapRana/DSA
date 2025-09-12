#include<bits/stdc++.h>
using namespace std;

int findmax2Darray(vector<vector<int>> &arr ){
     int rowsize = arr.size();
     int colsize = arr[0].size();
     int maxvalue = INT_MIN;

     for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            maxvalue = max(maxvalue, arr[i][j]);            
        }
     }

return maxvalue;

}
int findmin2Darray(vector<vector<int>> &arr ){
     int rowsize = arr.size();
     int colsize = arr[0].size();
     int minvalue = INT_MAX;

     for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            minvalue = min(minvalue, arr[i][j]);            
        }
     }

return minvalue;

}



bool search2d(vector<vector<int>> &arr, int target){
     int rowsize = arr.size();
     int colsize = arr[0].size();

      for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j]==target){
                return true;
            }
            
        }
     }

     return false;
}
 
int main(){
     vector<vector<int>> arr ={
        {14,25,35,45},
        {55,63,75,38},
        {9,10,11,12}
     };
      int target = 40;
     int rowsize = arr.size();
     int colsize = arr[0].size();


    //    for(int i=0; i<rowsize; i++){
    //     for(int j=0; j<colsize; j++){
    //         cout<<"enter the value at:("<<i<<", "<<j<<")"; 
    //         cin>>arr[i][j];
    //         }
    //         cout<<endl;
            
    //     }

        // cout<< "ans is : "<<ans;

        int minans = findmin2Darray(arr);
        cout<< "minans is : "<<minans<<endl;


        int maxans = findmax2Darray(arr);
        cout<< "maxans is : "<<maxans;
    

    return 0; 
}