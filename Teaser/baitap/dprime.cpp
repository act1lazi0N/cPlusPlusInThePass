#include<bits/stdc++.h>
using namespace std;
int tongchuso(int a)
{
    int tg = 0;
    while (a > 0)
    {
        tg = tg + a % 10;
        a = a / 10;
    }
    return tg;
}
bool kiemtranguyento(int a)
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
    int a[n+1];
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    int dem = 0;
    for (int i = 0; i < n; i ++)
    {
        if(kiemtranguyento(a[i]) == true && kiemtranguyento(tongchuso(a[i])) == true)
            dem ++;
    }
    cout << dem << endl;
    for (int i = 0; i < n; i ++)
    {
        if(kiemtranguyento(a[i]) == true && kiemtranguyento(tongchuso(a[i])) == true)
            cout << a[i] << " ";
    }
}
