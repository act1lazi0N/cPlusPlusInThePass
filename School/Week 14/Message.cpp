#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    int n[100001];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        cout << (n[i] - 1) * 2 << endl;
    }

}
