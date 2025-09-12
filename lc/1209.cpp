class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        int i = 0;
        int j = 0;
        int n = s.size();
        vector<int> count(n);
        while (j < s.size())
        {
            // step 1
            s[i] = s[j];
            // step 2
            count[i] = 1;
            // step 3
            if (i > 0 && s[i] == s[i - 1])
            {
                count[i] += count[i - 1];
            }
            // step 4
            if (count[i] == k)
            {
                i = i - k;
                i++;
                j++;
            }

           
        }
         return s.substr(0, i);
    }
};

#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}