#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = b;
    if (a < b)
    {
        cout << "-1";
    }
    while(ans <= a)
    {
        if ((ans*2) >= a)
        {
            break;
        }
        ans += b;
    }
    cout << ans;
}
