#include<bits/stdc++.h>
using namespace std;
bool kiemtrasobacthang(int a)
{
    if (a < 10)
        return false;
    int tg;
    while (a > 0)
    {
        tg = a % 10;
        a = a / 10;
        if (a % 10 > tg)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    for (int i = 0; i < n; i ++)
    {
        if (kiemtrasobacthang(a[i]) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
