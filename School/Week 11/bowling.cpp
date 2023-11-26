#include<bits/stdc++.h>
using namespace std;
int summtp(int n, int m, vector<int> a)
{
    int sum = 0;
    int k = 1;
    for (int i = n; i <= m; i++)
    {
        sum+=a[i] *k;
        k++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxx = max(summtp(i, j, a), maxx);
        }
    }
    cout << maxx;
}
