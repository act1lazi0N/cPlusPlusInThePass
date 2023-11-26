#include<bits/stdc++.h>
using namespace std;
int nhan(int a, int b)
{
    int tong = 0;
    do
    {
        tong = tong + a * (b % 10);
        b = b / 10;
    }
    while (b > 0);
    return tong;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int kq = 0;
    while (a > 0)
    {
        kq = kq + nhan (a % 10, b);
        a = a / 10;
    }
    cout << kq;
}
