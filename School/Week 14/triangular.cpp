#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, s;
    ll n[100001], z[100001];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        z[i] = 0;
        cin >> n[i];
        while(n[i] > 0)
        {
            z[i]++;
            n[i] -= z[i];
        }
        if (n[i] == 0)
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }

}
