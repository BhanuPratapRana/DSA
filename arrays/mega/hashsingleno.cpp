#include<bits/stdc++.h>
using namespace std;

//by hash map
int singleno(vector<int>& nums){
    
    //frequency table
    unordered_map<int, int> freqmap;

    //add frequencies to map
    for(int i=0; i<nums.size(); i++){
        int num = nums[i]; //map initiate by 0
         freqmap[num] = freqmap[num]+1;
         printmap(freqmap);
    }
    

    int ans;

    for(auto it : freqmap ){
        int key = it.first;
        int freq = it.second;

        if(freq==1){
            ans = key;
            break;
        }
        

    }   

    return ans;

}

//printing map  after every entry for understanding better 
void printmap(unordered_map<int, int>&freqmap){
    unordered_map<int, int> :: iterator it;    
    cout<<"map has below things :"<<endl;
    for(it=freqmap.begin(); it!= freqmap.end(); it++){
        int key = it-> first;
        int freq = it-> second;
        cout<<key<<" " <<freq<< endl;
    }

}

 
int main(){
    vector<int> nums ={4,1,2,1,2};

    int ans = singleno(nums);
    cout<<"single no is : "<<ans;

     
     
    return 0; 
}