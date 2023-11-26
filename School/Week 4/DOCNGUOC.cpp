#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    int dem1 = 0, dem2 = 0;
    int sw1, sw2;
    cin >> a >> b;
    while (a > 0)
    {

        sw1 = a % 10;
        dem1 = dem1 * 10 + sw1;
        a /= 10;
    }
    while (b > 0)
    {

        sw2 = b % 10;
        dem2 = dem2 * 10 + sw2;
        b /= 10;
    }
    if (dem1 < dem2)
        swap(dem2, dem1);
    cout << dem1;
    return 0;
}
