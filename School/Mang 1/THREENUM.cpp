#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[100001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = i + 2; k < n; k++)
            {
                sum = 2*a[i] - 3*a[j] + 5*a[k];
                maxx = max(sum, maxx);
            }
        }
    }
    cout << maxx;

}
