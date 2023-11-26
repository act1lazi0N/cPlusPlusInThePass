#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cnt;
    long long n;
    cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

}
