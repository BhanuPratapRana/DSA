#include<bits/stdc++.h>
using namespace std;

void rotatearray(vector<int>& arr, int n){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    
}


void shiftarr(vector<int>& arr, int k){
    int n = arr.size();
    k=k%n;


    //1.reverse all
    reverse(arr.begin(), arr.end());

    //2. reverse first k elements
    reverse(arr.begin(), arr.begin()+k);

    //3. reverse last n-k elements
    reverse(arr.begin()+k, arr.end());

}
 
int main(){
     vector<int> arr={1,2,3,4,5,6,7};
    int k=4;
    shiftarr(arr, k);
    cout<<"After shifting :";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
     
    return 0; 
}