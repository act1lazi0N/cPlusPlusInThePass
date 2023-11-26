#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, cnt = 0, bs = 0;
    cin >> n;
    while(s < n)
    {
        cnt++;
        bs+=cnt;
        s+=bs;
    }
    if (s == n)
    {
        cout << cnt;
    }
    if (s > n)
    {
        cout << cnt - 1;
    }

}
