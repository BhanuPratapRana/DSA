#include<bits/stdc++.h>
using namespace std;
// magical line--> ek case main solve karunga , baaki recursion sambhaal lega !!!

 void maxinarray(int arr[], int size, int index, int &maxi){
    //base case
    if(index == size){
        return ;
    }
    
    //recursive relation
    // 1 case maine solve kiya
    if(arr[index]>maxi){
        maxi = arr[index];
    }

    //baaki recursion ne solve kiya!
    maxinarray(arr, size, index+1, maxi);


}

void mininarray(int arr[], int size, int index, int &mini){
    //base case
    if(index == size){
        return ;
    }
    
    //recursive relation
    // 1 case maine solve kiya
    if(arr[index]<mini){
        mini = arr[index];
    }

    //baaki recursion ne solve kiya!
    mininarray(arr, size, index+1, mini);

}


void printarray(int arr[], int size, int index){
    //base case
    if(index == size){
        return ;
    }
    
    //recursive call
    // 1 case maine solve kiya
    cout<<arr[index]<<" "; 

    //baaki recusion ne solve kiya!
    printarray(arr, size, index+1);
}

bool searcharray(int arr[], int size, int index, int target){
    //base case
    //2 base case-->found/ not found
    if(index== size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }

    //recursive relation case
    bool ans = searcharray(arr, size, index+1, target);
    return ans;
}
 
int main(){
     int arr[]={10, 20, 30 , 40, 50, 60};
     int size =6;
     int index =0;
     int target =40;
        int maxi = INT_MIN;
        int mini = INT_MAX;



     printarray(arr, size, index);
        cout<<endl;
       cout<< searcharray(arr, size, index, target) ;
     
    return 0; 
}