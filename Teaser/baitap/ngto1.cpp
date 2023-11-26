#include<bits/stdc++.h>
using namespace std;
bool check(int a)
{
    for (int i = 2; i < a; i ++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= n; i ++)
    {
        if (n % i == 0)
            dem ++;
    }
    if (check (dem) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
