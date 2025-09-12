#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int rowsize =3;
    int colsize = 2;
     int arr[3][3];



     for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"enter the value for ("<<i<<","<<j<<"):";
            cin>>arr[i][j];
        }
     }

     //fill(&arr[0][0],&arr[0][0]+rowsize*colsize,5);

     //2d anti diognal 
    //  for(int i=0; i<rowsize;i++){
    //     cout<<arr[i][rowsize-1-i];
    //     cout<<endl;
    //  }

     for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

        
     }
    return 0; 
}