#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&v){   //tc -- O(n^2)  sc -- O(1)
    int n= v.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if( v[j]>v[j+1] ){
                swap(v[j], v[j+1]);

            }
        }
    }
}

void selectionsort(vector<int>&v){  //tc -- O(n^2)  sc -- O(1)
    int n= v.size();
    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[minindex]){
                minindex = j;
            }
        }
        swap(v[i], v[minindex]);
    }
}

void insertionsort(vector<int>&v){ //tc -- O(n^2)  sc -- O(1)
    int n= v.size();
    // i=0 chhod deta hun
    for(int i=1; i<n; i++){
        int key = v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        
            v[j+1]=key; //insertion
        
    }
}

void print(vector<int>&v){
    int n= v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}
 
int main(){
     vector<int> v={1,2,3,4,5};
     bubblesort(v);
     print(v);
     cout<<endl;

     selectionsort(v);
     print(v);
        cout<<endl;

        insertionsort(v);
        print(v);
        cout<<endl;


     
    return 0; 
}