#include<iostream>
using namespace std;

//by not using % and / operators

int getans(int dividend, int divisor){
    int s = - dividend;
    int e = dividend;
    int mid = s+(e-s)>>1; //bitwise operator for division by 2    >> ---- divide by 2  && << --- multiply by 2

    int ans =0;
    while(s<=e){
        if (divisor*mid == dividend){
            return mid; // if we get the exact answer
        }

        if(divisor *mid <= dividend){
            ans =mid; // store and compute
            s = mid+1;
        }
        else{
            e = mid -1;

        }
        //ye main bhool jata hun aur fir bhool gya 
        mid = s+(e-s)>>2;

    }
    return ans;
}

int main(){
    int dividend =10;
    int divisor =2;

    int ans = getans(abs(dividend), abs(divisor));
  
    // ans answer positive aa rha hain for negative values also
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
        ans = -ans; // if one of them is negative then answer will be negative
    }

    cout<<"the answer is :"<<ans<<endl;

}




