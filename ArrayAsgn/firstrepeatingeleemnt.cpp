#include<bits/stdc++.h>
using namespace std;

 int firstrepeated(int a[], int n){
unordered_map<int,int> hash;

    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    

    for (int i = 0; i < n; i++)
    {
        if (hash[a[i]]>1)
        {
            return i+1;
        }
        
    }

    return -1;
}


 
int main(){
     int a[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(a) / sizeof(a[0]); // Calculate size of the array
    int index = firstrepeated(a, n);

    if (index != -1) {
        cout << "First repeated element is at index: " << index << endl;
    } else {
        cout << "No repeated elements found." << endl;
    }

    
    
     
    return 0; 
}