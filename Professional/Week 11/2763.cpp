#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll a[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n/2; i++)
        {
            if (i < n/2- 1)
            {
                cout << a[i] << " " << a[n-i-1] << " ";
            }
            else
            {
                cout << a[i] << " " << a[n-i-1];
            }
        }
        if (n % 2 == 0)
        {
            cout << a[n/2];
        }
        cout << "\n";
    }
}
