#include<bits/stdc++.h>
using namespace std;
int ladder(long long n)
{
    long long so=0;
    if(n<10)
    {
        return -1;
    }
    else
        while(n>=10)
        {
            so=n%10;
            n=n/10;
            if(so< (n%10))
            {
                return -1;
            }
        }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    long long t[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (ladder(t[i])==0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
