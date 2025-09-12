#include<bits/stdc++.h>
using namespace std;
 
int main(){
     vector<int> arr;
     arr.push_back(10);
     arr.push_back(20);
     arr.push_back(30);
     arr.push_back(40);
     arr.push_back(50);
     
    int target =40;
    bool it= binary_search(arr.begin(), arr.end(), target);  //tc-->o(logn) of all three
    cout<<it<<endl;

   auto it2 = lower_bound(arr.begin() , arr.end(), 41);  //will five value greater or equal to target
    cout<<*it2<<endl;

    auto it3 = upper_bound(arr.begin() , arr.end(), 40);  //will five value greater  to target
    cout<<*it3<<endl; 

    // auto range = equal_range(arr.begin(), arr.end(), 40);
    //  for (auto it4 = range.first; it4 != range.second; ++it4) {
    //     cout << *it4 << " ";
    //  }
    //  cout<<endl;


     //min max in a range in container
     auto it5 = min_element(arr.begin(), arr.end());
     cout<<*it5<<endl;
     
     auto it6 = max_element(arr.begin(), arr.end());
     cout<<*it6<<endl;
     






    return 0; 
}