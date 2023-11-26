#include <bits/stdc++.h>
using namespace std;
int dem_so (int a)
{
    int dem = 0;
    do
    {
        dem ++;
        a = a / 10;
    }
    while (a > 0);
    return dem;
}
int dao_so(int a)
{
    int save = a;
    int boi = 1;
    for (int i = 1; i < dem_so(a); i ++)
        boi = boi * 10;
    a = a % 10 * boi;
    a = a + save / 10;
    return a;
}
bool kiem_tra_nguyen_to (int a)
{
    for (int i = 2; i <= sqrt (a); i ++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
bool kiem_tra_nguyen_to_vong(int a)
{
    int save = a;
    do
    {
        if (kiem_tra_nguyen_to(a) == false)
            return false;
        a = dao_so(a);
    }
    while (a != save);
    return true;
}
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 2; i <= n; i ++)
    {
        if (kiem_tra_nguyen_to_vong(i) == true)
            dem ++;
    }
    cout << dem;
}
