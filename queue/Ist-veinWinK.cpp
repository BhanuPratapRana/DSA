#include<bits/stdc++.h>
using namespace std;
 
int main(){
     
     
    return 0; 
}

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int> q;
        vector<int> ans;
        //index store krenge hm kyuki wo hme bata dega 
        // K current element current window me hain ya nhi
        
            
        //step 1 prosess first window
        for(int i=0;i<k;i++){
            int element =arr[i];
            if(element<0){
                q.push_back(i);
            }
            //above window stores the indexes of all the -ve numbers inside the first windwo
            
        }//store ans for first window
          if(q.empty()){
                //no negative integer found
                ans.push_back(0);
            }
            else{
                int index = q.front();
                int element = arr[index];
                ans.push_back(element);
            }
        
        //step 2 process remaining window
        int n=arr.size();
        for(int i=k;i<n;i++){
    
         
            
            //step A : removal of elements which are not inside the current window
            //YHA DIMAAAG CHALAO
            if(!q.empty() && q.front()<i-k+1){
                q.pop_front();
            }
            
            //step B : addition of new element
            int element =arr[i];
            if(element<0){
                q.push_back(i);
            }
            
            //step c ans store
               if(q.empty()){
                //no negative integer found
                ans.push_back(0);
            }
            else{
                int index = q.front();
                int element = arr[index];
                ans.push_back(element);
            }
            
        }
        
        
        
        
        return ans;

    
    }
};
