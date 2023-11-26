#include<bits/stdc++.h>
using namespace std;
int sp[1001], ep[1001];
int main()
{
    int n, k;
    cin >> n >> k;
    pair<int, int> a[k];
    for (int i = 0; i < k; i++)
    {
        int t;
        cin >> t; a[i].second = t;
        cin >> t; a[i].first = t;
        if (a[i].first<a[i].second)
            swap(a[i].first, a[i].second);
    }
    sort(a, a + k);
    int ans = 1;
    sp[1] = 1;
    ep[1] = n;
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <= ans; j++)
        {
            if (a[i].second >= sp[j] && a[i].first <= ep[j])
            {
                sp[j+1] = a[i].first;
                ep[j+1] = ep[j];
                ep[j] = a[i].first-1;
                ans++;
                break;
            }
        }
    }
    cout << ans;
}
