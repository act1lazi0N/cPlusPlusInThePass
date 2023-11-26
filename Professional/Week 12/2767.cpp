#include<bits/stdc++.h>
#define ll long long
using namespace std;
int x;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x;
        vector<int> v;
        for (int last = 9; last > 0 && x > 0; last--)
        {
            v.push_back(min(last, x));
            x -= v.back();
        }
        if (x > 0) cout << "-1\n";
        else
        {
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i];
            }
            cout << "\n";
        }
    }
}

