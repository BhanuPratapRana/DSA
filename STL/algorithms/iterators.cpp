#include<bits/stdc++.h>
using namespace std;

void printdouble(int a){
    cout<<2*a<< " ";
}
bool checkeven(int a){
    return a%2==0;
}
 
int main(){
    vector<int> arr(6);
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    arr[3]=14;
    arr[4]=13;
    arr[5]=15;
    int target =11;

    for_each(arr.begin(),arr.end(),printdouble);
    cout<<endl;

    auto it= find(arr.begin(), arr.end(), target);
    cout<<*it<<endl;

    auto it2 = find_if(arr.begin(),arr.end(),checkeven);
    cout<<*it2<<endl;

    int ans = count(arr.begin(), arr.end(), target);
    cout<<ans<<endl;

     int ans2 = count_if(arr.begin(), arr.end(), checkeven);
    cout<<ans2<<endl;

    sort(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;



    //  reverse(arr.begin(), arr.end());
    //   for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // rotate(arr.begin(), arr.begin()+3, arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    auto it3 = unique(arr.begin(), arr.end());

    //it3 iterator se pehle sbhi unique element store honge
    //it3 ke baad saare duplicate element hain
    arr.erase(it3,arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;


   auto it4 = partition(arr.begin(), arr.end(), checkeven);
   for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;

    
    
   





     
     
    return 0; 
}