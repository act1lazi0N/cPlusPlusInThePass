#include<bits/stdc++.h>
using namespace std;
bool PfSqrt(long double x)
{
    long double sr = sqrt(x);
    return((sr - floor(sr)) == 0);
}
bool sx(int num)
{
    int cnt = 0;
    for (int i = 2; cnt < 2 && i <= sqrt(num); ++i)
    {
        while(num % i == 0)
        {
            num /= i;
            ++cnt;
        }
    }
    if (num > 1)
        ++cnt;
    return cnt == 2;
}
void findn(int n)
{
    vector<int> vt;
    for (int i = 1; i <= n; i++)
    {
        if (sx(i) && !PfSqrt(i))
        {
            vt.push_back(i);
        }
    }
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    findn(n);
    return 0;
}
