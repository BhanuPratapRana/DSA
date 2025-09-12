#include <bits/stdc++.h>
using namespace std;
void prevsmallerElement(stack<int> &s2, vector<int> &arr, vector<int> &ans2){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int element = arr[i];
        while(s2.top()>element){
            s2.pop();

        }
        //yha agye mtlb stack top pr koi chota element hain
        ans2.push_back(s2.top());
        s2.push(element);


    }
}

void nextsmallerElement(stack<int> &s, vector<int> &arr, vector<int> &ans)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int element = arr[i];

        while (s.top()>=element)
        {
            s.pop();              
        }
        //jb main yha pohunch gya, to stack pr koi choota element aa chuka h, usko answer me store karlo
        ans.push_back(s.top());
        s.push(element);
    }
}

int main()
{
    vector<int> v;

    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    stack<int> s;
    stack<int> s2;
    s.push(-1);
    s2.push(-1);

    vector<int> ans;
    vector<int> ans2;

    nextsmallerElement(s, v, ans);
    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout<<endl;
    prevsmallerElement(s2,v,ans2);
     for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }


    return 0;
}