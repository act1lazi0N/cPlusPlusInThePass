#include<bits/stdc++.h>
using namespace std;
int rv(int n)
{
    int d = 0;
    while(n > 0)
    {
        d = d * 10 + n % 10;
        n /= 10;
    }
    return d;
}
int main()
{
    int n;
    int k;
    cin >> k >> n;
    int a[n];
    a[0] = k;
    for (int i = 0; i < n; i++)
    {
        a[i] = rv(a[i-1] + a[0]);
        cout << a[i] << " ";

    }
}
