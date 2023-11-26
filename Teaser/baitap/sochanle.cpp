#include<bits/stdc++.h>
using namespace std;
int demchuso (int a)
{
    int tg = 0;
    do
    {
        tg = tg + 1;
        a = a / 10;
    }
    while (a > 0);
    return tg;
}
int main()
{
    int n;
    cin >> n;
    int dem = demchuso (n);
    bool t = true;
    for (int i = dem; i > 0; i --)
    {
        if ((i % 2 == 0) && ((n % 10) % 2 != 0))
        {
            t = false;
            break;
        }
        if ((i % 2 != 0) && ((n % 10) % 2 == 0))
        {
            t = false;
            break;
        }
        n = n / 10;
    }
    if (t == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
