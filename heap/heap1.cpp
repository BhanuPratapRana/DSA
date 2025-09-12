#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
    int* arr;
    int capacity;
    int index;

    heap(int capacity){
        this->capacity = capacity;
        arr = new int[capacity]; 
        
        index = 0;
        
        // initialize all values to 0
        for(int i=0; i<=capacity; i++){
            arr[i] = 0;
        }
    }

    void printheap(){
        for(int i=0; i<=capacity; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    // tc insert -- O(log n)
    // sc -- O(1)
    void insert(int val){
        if(index == capacity-1){
            cout<<"heap overflow "<<endl;
            return;
        }

        // agar space avialable hain
        index++;
        arr[index] = val;

        // now put val at right position
        // by comparing with its parent
        // i --> current index
        int i = index;
        while(i > 1){
            int parentindex = i/2;

            if(arr[parentindex] < arr[i]){
                swap(arr[parentindex], arr[i]);
                i = parentindex;
            }
            else{
                // parent already bda hain
                break;
            }
        } 
    }
};

// =======================================
// heapify function (global)
// n --> size of heap
// currindex --> index from which heapify krna hain
// =======================================
void heapify(int* arr, int n, int currindex){
    int i = currindex;
    int leftindex = 2*i;
    int rightindex = 2*i+1;

    int largestkaindex = i;  
    // assuming i is largest index
    // pr ho skta hain left ya right bda ho
    if(leftindex <= n && arr[leftindex] > arr[largestkaindex]){
        largestkaindex = leftindex;
    }

    // check for right
    if(rightindex <= n && arr[rightindex] > arr[largestkaindex]){
        largestkaindex = rightindex;
    }

    // if largestindexval still i hi hain, then no need to do anything

    // agar largest index change hua hain, then swap logic lagao left ya right mein se koi
    if(largestkaindex != i){
        swap(arr[largestkaindex], arr[i]);
        i = largestkaindex;
        // ab largest index pr gya hain, usse bhi heapify krna hain
        heapify(arr, n, i);
    }
}

// =======================================
// build heap function (global)
// n --> size of heap
// start from last non-leaf node
// =======================================
void buildheap(int* arr, int n){
    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }
}

// =======================================
// heapsort function (global)
// n --> size of heap
// =======================================
void heapsort(int* arr, int n){
    while(n > 1){
        // step 1 : swap first and last
        swap(arr[1], arr[n-1]);

        // step 2 : reduce size
        n--;

        // step 3 : heapify
        heapify(arr, n, 1);
    }
}

// =======================================
// MAIN FUNCTION
// =======================================
int main(){
    // heap pq(10);
    // pq.insert(10);
    // pq.printheap();
    // pq.insert(20);
    // pq.printheap();
    // pq.insert(30);
    // pq.printheap();
    // pq.insert(40);
    // pq.printheap();
    // pq.insert(50);
    // pq.printheap();

    // pq.deletefromheap(40);
    // pq.printheap();
    // pq.deletefromheap(50);
    // pq.printheap();

    int arr[6] = {-1, 54, 53, 55, 52, 50};  // -1 dummy at index 0
    int n = 6;

    buildheap(arr, n);

    cout<<"printing heap array :"<<endl;
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapsort(arr, n);

    cout<<"printing sorted array :"<<endl;
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     
    return 0; 
}
