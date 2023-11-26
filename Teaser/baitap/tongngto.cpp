#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool t [n+1];
    fill (t + 1, t + n, true);
    t [1] = false;
    for (int i = 1; i <= n; i ++)
    {
        if (t [i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                t [j] = false;
        }
    }
    int kq = 0;
    for (int i = 1; i <= n; i ++){
        if (t [i] == true)
            kq = kq + i;
    }
    cout << kq;
}
