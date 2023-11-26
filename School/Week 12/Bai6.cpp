#include<bits/stdc++.h>
using namespace std;
long long maxn = 1000000007;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    long lt = 1;
    int p[100001], e[100001];
    for (int i = 0; i < t; i++)
    {
        cin >> p[i] >> e[i];
        cnt += p[i%maxn] * e[i%maxn];
        /**for (int j = 1; j <= e[i]; j++)
        {
            lt *= p[i];
        }
        **/
    }
    cout << cnt;


}
