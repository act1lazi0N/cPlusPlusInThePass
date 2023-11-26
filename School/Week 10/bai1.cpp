#include<bits/stdc++.h>
using namespace std;
int snt(int c)
{
    if (c < 2)
        return 0;
    for (int i = 2; i <= sqrt(c); i++)
    {
        if (c % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    if (snt(a) == 1 && snt(b) == 1)
    {
        cout << "La hai so nguyen to cung nhau";
    }
    else
    {
        cout << "Khong la so nguyen to cung nhau";
    }
    return 0;
}
