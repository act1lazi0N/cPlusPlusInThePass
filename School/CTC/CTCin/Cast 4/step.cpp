#include<bits/stdc++.h>
using namespace std;

int step(int n)
{
    int k = 0;
    if (n < 10)
    {
        return false;
    }
    else
    {
        while(n >= 10)
        {
            k = n % 10;
            n /= 10;
            if (k < (n % 10))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int t[10000];
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (step(t[i]) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;

}
