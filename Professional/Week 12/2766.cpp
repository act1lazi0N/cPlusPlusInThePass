#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[3];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a + 4);
        cout << min(a[0], a[1]) * min(a[2], a[3]) << "\n";
    }
}
