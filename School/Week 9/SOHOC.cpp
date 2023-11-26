#include<bits/stdc++.h>
using namespace std;
int sum(int n, int a[], long summ)
{
    if (n < 0)
    {
        return summ;
    }
    else
    {
        summ += a[n-1];
        sum(n-1, a, summ);
    }
}
int main()
{
    int n;
    int a[10000];
    long summ = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    summ = sum(n, a, summ);
    cout << summ;
}
