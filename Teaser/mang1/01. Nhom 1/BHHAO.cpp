#include <bits/stdc++.h>

using namespace std;
int n, a;

int Tong(int x)
{
    int d = 0;
    while (x > 0)
    {
        d = d + x % 10;
        x = x / 10;
    }
    return d;
}

int Tong_Uoc(int x)
{
    if (x == 0) return -1;
    if (x <= 1) return 0;

    int d = 1;
    int i = 2;
    while(i*i <= x)
    {
        if(x%i == 0) d = d + i + x/i;
        if(i*i == x) d = d - i;
        i++;
    }
    return d;
}

int main()
{
    freopen("BHHAO.inp", "r",stdin);
    freopen("BHHAO.out", "w", stdout);
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        int b = Tong(a);
        if(b == Tong_Uoc(b)) s++;
    }
    cout << s;
    return 0;
}
