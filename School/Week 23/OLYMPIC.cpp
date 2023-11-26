#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, t;
    cin >> n >> m;
    int a1[n + 1], a2[n + 1], a3[n + 1];
    a1[0] = 0, a2[0] = 0, a3[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        a1[i] = a1[i - 1];
        a2[i] = a2[i - 1];
        a3[i] = a3[i - 1];
        if (t == 1)
        {
            a1[i]++;
        }
        else
        {
            if (t == 2)
            {
                a2[i]++;
            }
            else
            {
                a3[i]++;
            }
        }
    }
    vector<int> k1, k2, k3;
    int l, r;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        k1.push_back(a1[r] - a1[l-1]);
        k2.push_back(a2[r] - a2[l-1]);
        k3.push_back(a3[r] - a3[l-1]);
    }
    for (int i = 0; i < m; i++)
    {
        cout << k1[i] << " " << k2[i] << " " << k3[i];
        cout << "\n";
    }

}
/*
6 3
2 1 1 3 2 1
1 6
3 3
2 4
*/


























































































































































