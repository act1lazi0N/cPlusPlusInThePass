#include<bits/stdc++.h>
using namespace std;
int swaping(int n)
{
    int k;
    int res = 0;
    while (n > 0)
    {
        k = n % 10;
        res = res * 10 + k;
        n /= 10;
    }
    return res;
}
int check(int n)
{
    if (n == swaping(n))
    {
        return 0;
    }
    return -1;
}
int main()
{
    int n,k;
    cin >> n;
    int sum = 0;
    int res = 0;
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (swaping(i) == 0)
        {
            ans == i;
        }
    }
    cout << ans;

}
