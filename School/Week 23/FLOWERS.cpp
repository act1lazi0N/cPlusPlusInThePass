#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int test = 0, kq = 0;
    vector<int> b;
    int a[n], t = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i+1] != a[i])
        {
            b.push_back(t);
            t=1;
        }
        else
        {
            t++;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] <= 2)
        {
            test += b[i];
        }
        else
        {
            test += 2;
            if (test > kq) kq = test;
            test = 2;
        }
    }
    if (test > kq)
    {
        kq = test;
    }
    cout << kq;

}
