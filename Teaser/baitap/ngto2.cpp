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
int tongchuso (int a)
{
    int tg = 0;
    while (a > 0)
    {
        tg = tg + a % 10;
        a = a / 10;
    }
    return tg;
}
int main()
{
    int n;
    cin >> n;
    if (check (tongchuso (n)) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
