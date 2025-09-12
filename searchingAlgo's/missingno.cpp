#include <bits/stdc++.h>
using namespace std;

int missingno(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int ansindex = -1;
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int number = arr[mid];
        int index = mid;
        int diff = number - index;

        if (diff == 0)
        {
            // right mein ans milega
            s = mid + 1;
        }

        else if (diff == 1)
        {
            // store and compute
            // left mmein
            ansindex = index;
            e = mid - 1;
        }
    }
    
    if (ansindex == -1)
    {
        return n;
    }
    // ye mujhse glt ho gya tha
    // for etreme right case
    // are hardcoding the logic

    return ansindex;
}

int main()
{
    vector<int> arr = {3, 0, 1};
    int ans = missingno(arr);
    cout << "ans is :" << ans << endl;

    return 0;
}