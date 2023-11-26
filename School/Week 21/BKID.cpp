#include<bits/stdc++.h>
using namespace std;

const int maxi = 1e5+1;
int a[maxi], n, k;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    k = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[k] > a[i])
        {
            cout << k << "\n";
            k = i;
        }
        else
        {
            cout << i << "\n";
        }
    }
}
