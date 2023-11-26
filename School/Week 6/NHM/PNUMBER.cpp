#include<bits/stdc++.h>
using namespace std;
bool sd (int n)
{
    while (n > 0)
    {
        int c = n % 10;
        if (c != 6 && c != 8)
            return false;
            n /= 10;
    }
    return true;
}
int main()
{
    int n;
    int dem = 0;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sd(a[i]) == true)
        {
            dem++;
        }
    }
    cout << dem;
    return 0;

}
