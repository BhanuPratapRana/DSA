#include<bits/stdc++.h>
using namespace std;

bool search(int arr[][3], int rowsize, int colsize,  int target){
   
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
    int target =20;
     int rowsize =3;
    int colsize = 3;
     int arr[3][3]= {
        {1,20,3},
        {4,5,6},
        {7,8,9}
     };



     

    bool ans = search(arr, rowsize, colsize, target);

    cout<<"ans is :"<<ans<<endl;



      

    return 0; 
}