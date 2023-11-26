#include<bits/stdc++.h>
using namespace std;
int a, b, m, n;
int tong1 = 0;
int tong2 = 0;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        tong1 = a * b;
    }
    for (int i = 0; i < n; i++)
    {
        tong2 = tong2 + tong1;
    }
    cout << tong2;


}
