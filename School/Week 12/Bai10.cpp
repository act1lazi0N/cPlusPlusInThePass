#include<bits/stdc++.h>
using namespace std;

int cnt(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i += p)
    {
        int tmp = i;
        while(tmp % p == 0)
        {
            ++ans;
            tmp/=p;
        }
    }
    return ans;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << cnt(n, p);
}
