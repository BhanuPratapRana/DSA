#include<bits/stdc++.h>
using namespace std;
// //odd current element question
// int findoddcurrentelement(int arr[], int size){
//     int s=0;
//     int e = size-1;
//     int mid =s+(e-s)/2;

//     while(s<=e){
//         if(s==e){
//             //single element
//             return s;
//         }

//         if(mid-1>=0 && arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1 ]&& mid+1<size){
//             return mid; //current elent is single
//         }
 
//         //duplicate exist on left side
//         if(mid-1>=0 && arr[mid]==arr[mid-1]){
//             int pairstartindex = mid-1;
//             if(pairstartindex&1){ // i am standing at right part of ans 
//                 //odd index
//                 e = mid-2;
//             }
//             else{
//                 //even index
//                 s = mid+2;
//             }

            
//         }
//         //duplicate exist on right side
//         else if( mid+1<size && arr[mid]== arr[mid+1]){
//                int pairstartindex = mid;
//             if(pairstartindex&1){
//                 //odd index
//                 e = mid-2;
//             }
//             else{
//                 //even index
//                 s = mid+2;
//             }


//         }
//         mid = s + (e - s) / 2; // update mid
//     }
//     return -1; 
// }
 
 int singleNonDuplicate(vector<int>& arr) {
         int s=0;
    int n = arr.size();
    int e = n-1;
    int mid =s+(e-s)/2;

    while(s<=e){
        if(s==e){
            // case 1 single element
            return arr[s];
        }

        int currvalue = arr[mid];
        int leftvalue =-1;
        if(mid-1>=0){
            leftvalue = arr[mid-1];
        }

        int rightvalue =-1;
        if(mid+1<n){
            rightvalue = arr[mid+1];
        }
        
        //case 2 -- no duplicate
        if(currvalue != leftvalue && currvalue != rightvalue){
            return currvalue;
        }
 
         // case 3 -- duplicate exist on left side
        if(currvalue == leftvalue && currvalue != rightvalue){
            int pairstartindex = mid-1;
            if(pairstartindex&1){ // i am standing at right part of ans 
                //odd index
                e = mid-1;
            }
            else{
                //even index
                s = mid+1;
            }

            
        }
        // case 4 --  duplicate exist on right side
        else if( currvalue != leftvalue && currvalue== rightvalue){
               int pairstartindex = mid;
            if(pairstartindex&1){
                //odd index
                e = mid-1;
            }
            else{
                //even index
                s = mid+1;
            }


        }
        mid = s + (e - s) / 2; // update mid
    }
    return -1; 
        
    }

int main(){
    // int arr[]={1, 2,2,3,3};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // int ans = findoddcurrentelement(arr, size);
    // cout <<"the odd element index is:"<<ans <<endl;
    // cout << "the odd element is:"<<arr[ans] <<endl;

    // for single non duplicate element
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4,5,5};
    int singleElement = singleNonDuplicate(nums);
    cout << "The single non-duplicate element is: " << singleElement << endl;

     
     
    return 0; 
}