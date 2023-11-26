#include<bits/stdc++.h>
using namespace std;
int a,b;
int tonguocso(int a)
{
    int kq = 0;
    for (int i = 1; i < a; i ++)
    {
        if (a % i == 0)
            kq = kq + i;
    }
    return kq;
}
int main()
{
    cin >> a >> b;
    if (tonguocso(a) == b && tonguocso(b) == a)
        cout << "YES";
    else
        cout << "NO";
}
