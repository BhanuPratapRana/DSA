#include<bits/stdc++.h>
using namespace std;

// void func(int a[], int n){
//     cout<<"array elements are:";
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<endl;
//     }
// }

void print(vector<int>v){
    int size = v.size();

    for(int i=0; i<size; i++){
        cout<<v[i]<<endl;
    }
}

 
int main(){
    //in vector dont tell the size of vector.
    //just keep inserting, i will mange the allocation.

    vector<int>v; //array hi hain


    // while(1){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    //     cout<<"capacity :"<<v.capacity()<<" size :"<<v.size();
    // }



    //insert
    v.push_back(1);    
    v.push_back(2);
    v.push_back(3);


    //pop--> delete
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back(); 

  print(v);











    //static memory allocation of array 
     //int arr[5] = {1, 2, 3, 4, 5};

     //dynamic memory of array
    // int n;
    // cin>>n;
    // int *arr = new int[n];

    // for(int i=0; i<n; i++){
    //     int data;
    //     cin>>data;
    //     arr[i]= data;
    // }
    
    //  func(arr, n);




    return 0; 
} 