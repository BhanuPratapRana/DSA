#include <bits/stdc++.h>
using namespace std;

// Method 2: Sorting + Swapping method
void sortmethod(int *arr, int n) {
    int i = 0;
    while (i < n) {
        int index = arr[i] - 1; // Get the correct index for the current element
        if (arr[i] > 0 && arr[i] <= n && arr[i] != arr[index]) {
            swap(arr[i], arr[index]); // Swap to place the number in its correct position
        } else {
            ++i; // Move to the next element if the current one is in the right place
        }
    }

    // Now, find missing numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1 << " "; // Print missing number
        }
    }
    cout << endl; // To separate output clearly
}

// Visiting method (O(n) time complexity)
void findmissing(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]); // Get the absolute value for indexing
        if (index - 1 < n && arr[index - 1] > 0) {
            arr[index - 1] *= -1; // Mark the element as visited
        }
    }

    // All positive indices are missing
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << i + 1 << " "; // Print missing number
        }
    }
    cout << endl; // To separate output clearly
}

int main() {
    int arr[] = {1, 3, 5, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << "Missing numbers (sort method): ";
    sortmethod(arr, n);

    // Resetting the array for the next method
    int arr2[] = {1, 3, 5, 3, 4};
    cout << "Missing numbers (visiting method): ";
    findmissing(arr2, n);

    return 0; 
}
