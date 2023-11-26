#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, cnt = 0, Max = 0;
long long s[1000001];
int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < t; i++)
    {
        if ((s[i] % 2 == 0 && s[i+1] % 2 == 0) || (s[i] % 2 == 1 && s[i+1] % 2 == 1))
        {
            cnt++;
            Max = max(Max, cnt);
        }
        else
        {
            cnt = 1;
        }
    }
    cout << Max;

}
