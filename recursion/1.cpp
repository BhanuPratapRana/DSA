#include<bits/stdc++.h>
using namespace std;

// magical line ---> ek case main solve karunga, baaki recursion sambhaal lega !!!
int sum(int n){
    //base case
    if(n==1){
        return 1;
    }
        int ans = sum(n-1)+n;
        return ans;
    
}


int fib(int n){
    //base case
    if(n==0||n==1){
        return n;
    }
    //recursive case
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
 
int main(){
    int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int result = fib(n);
    // cout << "Fibonacci of " << n << " is: " << result << endl;
    cout<<"sum is :"<<sum(5)<<endl;
     
     
    return 0; 
}