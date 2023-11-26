#include<bits/stdc++.h>
using namespace std;
int n, ans[(int)1e6+2], a[(int)1e3+2];
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool sntm(int n)
{
    int trc = n - 1;
    int sau = n + 1;
    if (!snt(n) || n == 2)
        return false;
    else
    {
        while(!snt(trc))
        {
            trc--;
        }
        while(!snt(sau))
        {
            sau++;
        }
        int t = (trc + sau)/2;
        if (n > t)
            return true;
        else
            return false;
    }
}
int main()
{
    int t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (snt(a[i]) == true)
        {
            ans[t] = a[i];
            t++;
        }

    }
    for (int i = 0; i < t; i++)
    {
        if (sntm(ans[i]) == true)
        {
            cout << ans[i] << " ";
        }
    }

}
