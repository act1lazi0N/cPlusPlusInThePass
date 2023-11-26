#include<bits/stdc++.h>
using namespace std;
int a[10002], s = 0;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    int x = 1, y = n;
    while(x != y && x-1 != y)
    {
        s += (a[y] - a[x]);
        x++;
        y--;
    }
    cout << s;

}

