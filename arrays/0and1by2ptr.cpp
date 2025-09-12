#include<bits/stdc++.h>
using namespace std;

void sort0and1(vector<int>&arr){
    int n = arr.size();
    int l=0;
    int h=n-1;
    while(l<h){
    if(arr[l]==0){
        l++;
    }
    else if(arr[h]==1){
        h--;
    }
    else{
        swap(arr[l],arr[h]);
    }
    }


}
 
int main(){
     vector<int> arr={0,1,1,0,0,1,1};

    //  sort0and1(arr);
    // cout<<"Sorted array :";
    // for (int num : arr) {  // Print the sorted array
    // cout << num << " ";

    

cout << "Sorted array: ";
for (int i = 0; i < arr.size(); i++) {  // Use a traditional for loop
cout << arr[i] << " ";
}
cout << endl; 
   
     
    return 0; 
}