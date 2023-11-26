#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt += 1;
        }
    }
    if (cnt % 2 != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
