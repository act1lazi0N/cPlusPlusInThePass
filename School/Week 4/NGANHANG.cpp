#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    int dem = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        n = n + n*10/100;
        dem++;
        if (n >= m)
            break;
    }
    cout << dem;
}
