#include <bits/stdc++.h>
using namespace std;

void fullpyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertfullpyramid(int n)
{

    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void diamond(int n){
    fullpyramid(n);
    invertfullpyramid(n);
    
}

int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    diamond(n);

    return 0;
}