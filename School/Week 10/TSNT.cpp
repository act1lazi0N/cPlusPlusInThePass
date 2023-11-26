#include<bits/stdc++.h>
using namespace std;
int sch(int a)
{
     int c = 0;
    while(a != 0)
    {
        c += a % 10;
        a /= 10;
    }
    return c;
}
bool snt(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int m, n, k, d= 0;
    cin >> m >> n >> k;
    for (int i = m + 1; i < n; i++)
    {
        if (snt(i) && sch(i) % k == 0)
        {
            d++;
        }
    }
    cout << d;

}
