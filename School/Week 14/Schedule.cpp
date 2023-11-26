#include<bits/stdc++.h>
using namespace std;

int t, n[100001], x[100001], cmd[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    cin.ignore(1);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i] >> x[i];
        cmd[i] = x[i]+ 10*(n[i] - 1) - x[i]*n[i];
        if (cmd[i] < 0)
        {
            cmd[i] = 0;
        }
        cout << cmd[i] << endl;
    }
}
