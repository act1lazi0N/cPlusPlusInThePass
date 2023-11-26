#include<bits/stdc++.h>
using namespace std;
int n, a[1000001];
int main(int n, int a[])
{
    cin >> n;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int pmax = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(a[i], sum + a[i]);
        pmax = max(pmax, sum);
    }
    cout << pmax;
}

