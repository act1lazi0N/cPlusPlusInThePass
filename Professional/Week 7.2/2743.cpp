#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        p[0] = 0;
        int minn = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            p[i] = a[i] - a[i-1];
            if (i >= 2)
            {
                minn = min(minn, p[i] + p[i-1]);
            }
        }
        cout << minn << "\n";
    }
}
