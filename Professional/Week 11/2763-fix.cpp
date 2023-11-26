#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll a[301], b[301];
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1, l = 1, r = n; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                a[i] = b[l];
                l++;
            }
            else
            {
                a[i] = b[r];
                r--;
            }
        }
        for (int i = 1; i <= n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[n] << "\n";
    }
}
