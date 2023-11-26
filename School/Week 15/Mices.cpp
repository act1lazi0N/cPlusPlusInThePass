#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T, n, k, x1[100001], x2[100001];
    cin >> T;
    while(T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x1[i];
        }
        sort(x1, x1 + n);
        for (int i = 0; i < n; i++)
        {
            cin >> x2[i];
        }
        sort(x2, x2 + n);
        for (int i = 0; i < n; i++)
        {
            k = max(abs(x1[i] - x2[i]), k);
        }

    }
    cout << k;



}
