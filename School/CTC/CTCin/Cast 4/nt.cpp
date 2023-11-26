#include<bits/stdc++.h>
using namespace std;

int snt(int n)
{
    if (n < 2)
        return -1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return -1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[10], b[10];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int c;
    for (int i = 1; i <= n; i++)
    {
        c = (b[i]*b[i]) - (a[i]*a[i]);
        if (snt(c) == 0)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }


}
