#include<bits/stdc++.h>
using namespace std;
bool kiemtranguyento(int a)
{
    for (int i = 2; i < a; i ++)
        if (a % i == 0)
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    bool check[n+1];
    fill (check + 1, check + n, true);
    check[1] = false;
    for (int i = 1; i <= n; i ++)
    {
        if (check[i] == true)
        {
            for (int j = i * i;j <= n; j += i)
                check[j] = false;
        }
    }
    int kq = 0;
    for (int i = 1; i <= n; i ++)
    {
        if (check[i] == true)
            kq = kq + i;
    }
    if (kiemtranguyento(kq) == true)
        cout << "YES";
    else
        cout << "NO";
}
