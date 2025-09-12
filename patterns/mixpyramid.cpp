#include<bits/stdc++.h>
using namespace std;

 void mixpyramid(int n){
    //part 1
    for(int i=0; i<n; i++){
        //1 stars
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }


        //2 spaces
        for(int j=0; j <2*i+1; j++){
            cout << " ";
        }


        //3 stars
        for(int j=0; j < n-i; j++){
            cout << "*";
        }
        cout<<endl;
    }

    //part 2
    for(int i =0; i <n; i++){

        //stars
        for(int j=0; j < i+1; j++){
            cout << "*";
        }

        //spaces
        for(int j = 0; j < 2*(n-i)-1; j++){
            cout << " "; 
        }

        //stars
        for(int j=0; j < i+1; j++){
            cout << "*";
        }

        cout << endl;



    }

}
 
int main(){
    int n;
    cout<< "enter the value of n:";
    cin >>n;
    mixpyramid(n);
     
    return 0; 
}