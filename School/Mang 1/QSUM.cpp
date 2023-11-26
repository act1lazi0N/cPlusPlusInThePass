#include<bits/stdc++.h>
using namespace std;

int n, q;
int a[100001];
int s[100001];
int i, j;

int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    while(q--)
    {
        cin >> i >> q;
        cout << s[j] - s[i-1] << endl;
    }
    return 0;
}
