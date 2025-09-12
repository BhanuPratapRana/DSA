#include<bits/stdc++.h>
using namespace std;
 
int main(){
     vector<int> arr(5);
     arr[0]=10;
     arr[1]=20;
     arr[2]=30;
     arr[3]=40;
     arr[4]=50;

     int totalsum= accumulate(arr.begin(), arr.end(), 0);
     cout<<totalsum<<endl;


     vector<int> first;
     first.push_back(1);
     first.push_back(2);
     first.push_back(3);

     vector<int> second;
     second.push_back(3);
     second.push_back(4);
     second.push_back(5);

     vector<int> result(first.size());

     int ans = inner_product(first.begin(),first.end(),second.begin(), 0);
     cout<<ans<<endl;

     partial_sum(first.begin(), first.end(),result.begin());
     for(int a : result){
        cout<<a<< " ";        
     }cout<<endl;

     vector<int> five(5);

     iota(five.begin(),five.end(),100);
     for(int a: five){
        cout<<a<<" ";
     }cout<<endl;


    return 0; 
}