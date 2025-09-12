#include<bits/stdc++.h>
using namespace std;
//optimal approach
double BSprecision(int n){
    double s=0;
    double e=n;
    double mid= s+(e-s)/2;
    double ans =-1;

    while((e-s)>0.1){ // precision
        double root =mid*mid;

        if(root<=n){
            ans =mid;
            s=mid;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2; // update mid
}

    return ans;
}

//brute force approach
int mysqrt(int n){
    int s=0;
    int e=n;
    int mid= s+(e-s)/2;

    int ans =-1;
    
    while(s<=e){
        long long int root = mid*mid;
        if(root ==n){
            return mid;
        }
        if(root >n){
            e=mid-1;
        }
        else{
            ans=mid; //store and compute
            s=mid+1;
        }
        mid= s+(e-s)/2; // update mid
    }
    return ans;

}

double precisionsqrt(int n){
    double sqrt = mysqrt(n); // 63 --- 7.00  tc= o(logn)
    int precision =3;
    double step  =0.1;
    while(precision--){      // ------------tc-o(precision)
        double j = sqrt;  // 7.00
        while(j*j<=n){            // ----------------tc-0(10)
            sqrt =j;
            j= j+ step; //7.1, 7.2

        }
        //1 precision done after this loop
        step = step/10;
    }
    return sqrt;


}

// fianl tc = O(logn + precision*10)  sc = O(1)  10 is constant
// so final tc = O(logn) + O(precision) 
 
int main(){
    int n= 63;
    // int ans = mysqrt(n);
    // cout<<"the square roort of "<<n<<" is :"<<ans<<endl;

    double ans = precisionsqrt(n);
    cout<<"the square root of "<<n<<" is :"<<ans<<endl;
    cout<<endl;
    printf("the square root of %d is :%.3f\n", n, ans);
    cout<<endl;
    cout<<endl;

    // optimal approach  tc = O(logn)  sc = O(1)
    double ans2 = BSprecision(n);
    cout<<"the optimal square root of "<<n<<" is :"<<ans2<<endl;

    printf("binary search square rood of %d is : %.3f\n", n, ans2);
    cout<<endl;
     
     
    return 0; 
}