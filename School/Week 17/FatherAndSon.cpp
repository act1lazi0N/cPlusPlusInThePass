#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cnt = 0;
        if (a - b < b)
        {
            cout << -1 << "\n";
        }
        else
        {
            while(b * 2 != a)
            {
                a++;
                b++;
                cnt++;
            }
            cout << cnt << "\n";
        }

    }

}

