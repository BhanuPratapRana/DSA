#include<bits/stdc++.h>
using namespace std;
 
bool canwemakebouquetwithDdays(vector<int>& bloomDay,int m ,int k,int day ){


     int counter=0;   //chck weather the ith flower is bloomed or not
     
    for(int i=0;i<bloomDay.size(); i++){
        if(bloomDay[i]<=day){
            counter++; 
            
        }
         if(counter ==k){
                m--; 
                counter =0;
                if(m==0){
                    break;
                }
          
        }

        //not bloomed case
        if(bloomDay[i]>day)
        counter=0;
        
    }
    return m==0; //were you able to  m bouquets
}

  int minDays(vector<int>& bloomDay, int m, int k) {
    int min_days=-1;
     long long int total_flowers = (double)m*k;
     int n = bloomDay.size();

    if(total_flowers>n){
        return -1;
    }
    int s =*min_element(bloomDay.begin(),bloomDay.end());
    int e =*max_element(bloomDay.begin(),bloomDay.end());
    while (s<=e)    
    {
        int mid = s+(e-s)/2;
        int day =mid;
        if(canwemakebouquetwithDdays(bloomDay,m,k, day)){
            min_days=mid;
            e =mid-1;
        }
        else{ 
            
             s =mid+1;
            
        }
        
    }
    return min_days;
    
        
    }
 
int main(){
    vector<int> bloomday={1,10,3,10,2}; 
       int  m = 3, k = 1;

       int ans = minDays(bloomday, m,k);
       cout<<"minimum days to make bouquet : "<<ans<<endl;
       

     
     
    return 0; 
}