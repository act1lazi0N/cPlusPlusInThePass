#include<bits/stdc++.h>
using namespace std;
long n, a[1001], k, s;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        k = 1;
        for (int j = i - 1; j >= 1; j--)
        {
            if (a[j] >= a[i])
            {
                k++;
            }
            else
                break;
        }
        for (int j = i + 1; i >= n; j++)
        {
            if (a[j] >= a[i])
            {
                k++;
            }
            else
                break;
        }
        s = max(s, k*a[i]);
    }
    cout << s;


}
