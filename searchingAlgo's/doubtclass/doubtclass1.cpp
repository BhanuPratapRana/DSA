#include<bits/stdc++.h>
using namespace std;

//lower bound defintion:
//the first element which is greater than or equal to the target

//upper bound definition:
//the first element which is greater than the target
 
int main(){
     vector<int> arr ={10,20,20,20,20,30,40,50,60,70,80};
        int target = 20;

        auto it = lower_bound(arr.begin(), arr.end(), target) ;
        cout<<"first occurence of target index is "<<it-arr.begin()<<endl;
        cout<<"first occurence of target value is "<<*it<<endl;
        cout<<endl;

        auto it2 = upper_bound(arr.begin(), arr.end(), target);
        cout<<"last occurence of target index is "<<it2-arr.begin()-1<<endl;
        cout<<"last occurence of target value is "<<*(it2-1)<<endl;
        cout<<endl;
     
    return 0; 
}