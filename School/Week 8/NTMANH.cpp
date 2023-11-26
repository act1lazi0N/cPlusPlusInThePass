#include<bits/stdc++.h>
using namespace std;

int n, arr[(int)1e6+2], ans[(int)1e3+2], tt, a, b, t = 0;
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
int sntm(int n)
{
    if (n == 2)
        return 0;
    else
    {
        a = n + 1;
        b = n - 1;
        while(!snt(a))
        {
            a++;
        }
        while(!snt(b))
        {
            b--;
        }
        tt = (a+b)/2;
        if(n > tt)
            return 1;
        else
            return 0;
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (snt(arr[i]) == 1)
        {
            ans[t] = arr[i];
            t++;
        }

    }
    for (int i = 0; i < t; i++)
    {
        if (sntm(ans[i]) == 1)
        {
            cout << ans[i] << " ";
        }
    }
}
