//287
#include<bits/stdc++.h>
using namespace std;

//positioning mesthod
int bestmethodtodindduplicate(vector<int>&nums){  //tc --> o(n)  sc-->o(1)

    while (nums[0] != nums[nums[0]])
    //    nums[0=] 3       nums[3]         
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    
}


//visted solution
int bettermethodtofindduplicate(vector<int>&nums){  //tc--> o(n)   sc-->o(1)  but aaray is modified to achieve this 
    int ans =-1;
    for (int i = 0; i < nums.size(); i++){
        int index = abs(nums[i]);

        //already visited ?--> marked negative
        if(nums[index]<0){
            ans= index;
            break;
        }

        //visited mark
        else{ 
            nums[index] *=-1;
        }

         
    }
    return ans; 
    
    
}




int findduplicate(vector<int>&nums){
    sort(nums.begin(),nums.end()); 

    for (int i = 0; i < nums.size()-1; i++)  //loop utp n-1 to prevent out of bound condition
    {
        if(nums[i]==nums[i+1]){               //sort --> tc o(nlogn)  sc-o(n)
            return nums[i];
        }
       
        
    }
     return -1;    

}
 
int main(){
    vector<int> nums={3,1,3,4,2};
//    int answer= findduplicate(nums);
//     cout<<answer;

// int sol = bettermethodtofindduplicate(nums);
// cout<<sol;

int bestans = bestmethodtodindduplicate(nums);
cout<<bestans;
    
    
     
     
    return 0; 
}