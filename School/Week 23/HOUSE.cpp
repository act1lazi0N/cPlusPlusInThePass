#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, t = 1;
    cin >> n;
    char a[n];
    vector<int> v;
    for (int i = 0;i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i+1])
        {
            v.push_back(t);
            t = 1;
        }
        else
        {
            t++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        ans += (v[i] / 2);
    }
    cout << ans;
}

