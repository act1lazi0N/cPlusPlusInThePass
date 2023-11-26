#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int maxx(int i, int j)
{
    int res = 0;
    for (int k = i; k <= j;k++)
    {
        res = max(res, a[k]);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s= 0;
    for (int i = 2; i < n; i++)
    {
        int x = maxx(i, i - 1);
        int y = a[i];
        int z = maxx(i + 1, n);
        int tmp = 2*x - 3*y + 5*z;
        s = max(s, tmp);
    }
    cout << s;
}
