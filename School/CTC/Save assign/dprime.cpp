#include<bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if (n < 2) return false;
    for (int j = 2; j <= sqrt(n); j++)

        if (n % j == 0)
            return false;
    return true;
}
int tong(int n)
{
    int t;
    while (n != 0)
    {
        t += n % 10;
        n /= 10;
    }
    return t;
}
int main()
{
    int a[1001], n, ans[1001], g = 0;
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == true && snt(tong(a[i])) == true)
        {
            ans[g++] = a[i];
            dem++;
        }
    }
    cout << dem << endl;
    for (int i = 0; i < g - 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << ans[g - 1];
    return 0;
}
