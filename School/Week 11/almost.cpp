#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
    while(n != 0)
    {
        if (n % 10 != 6 && n % 10 != 8)
            return 1;
        n /= 10;
    }
    return 0;
}
int almost(int n)
{
    for(int i = 1; i < n; i++)
    {
        if (check(i) == 0 && n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    if (almost(n) == 1)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
