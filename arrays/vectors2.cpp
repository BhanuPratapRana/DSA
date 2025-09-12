#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v ){
    int size = v.size();
    cout<<"printing vector"<<endl;
    for(int i=0; i<size; i++){
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" "<<endl;
    }
}

void print2(vector<int>v){
    cout<<"printing vector method 2"<<endl;
    for(auto it: v){ 
        cout<<it<<" ";
    }
}
 
int main(){


    vector<int> v;

    int n;
    cout<<"enter the size of array :";
    cin>>n;
    
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    print(v);

    // for(int i=0; i<10; i++){
    // v.push_back(80);
    // }

    

    // i want to clear the vector
    v.clear();

    v.push_back(10);

    print(v);

    //vector initialization
    vector<int> arr;   //default with no data and size 0;
    vector<int>arr2(5,-1);  //init with  n size and specific data
    vector<int>arr3={1, 2, 3,4, 5};


    //how to copy vector 
    vector<int>arr5 = {1,2,3,4,5};
    vector<int>arr6(arr5);

    

     







    return 0; 
}