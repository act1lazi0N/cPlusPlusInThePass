#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
    if (n < 2)
    return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int a[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int dem = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (snt(i))
        {
            dem++;
            sum += i;
        }
    }
    cout << dem << " " << sum;
    return 0;
}
