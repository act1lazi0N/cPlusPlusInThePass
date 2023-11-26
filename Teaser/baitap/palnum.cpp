#include<bits/stdc++.h>
using namespace std;
int daonguoc(int a)
{
    int tg = 0;
    while (a > 0)
    {
        tg = tg * 10 + a % 10;
        a = a / 10;
    }
    return tg;
}
bool kiemtradoixung(int a)
{
    if (daonguoc(a) == a)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    while (kiemtradoixung(n) == false)
    {
        n = n + daonguoc(n);
    }
    cout << n;
}
