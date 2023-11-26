#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float arr[100];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    float sum = 0, sum1 = 0, sum2 = 0, sumch = 0, sumle = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > 0)
        {
            sum1 += arr[i];
        }
        if (arr[i] < 0)
        {
            sum2 += arr[i];
        }
        if (i % 2 == 0)
        {
            sumch += arr[i];
        }
        if (i % 2 != 0)
        {
            sumle += arr[i];
        }

    }
    cout << fixed << setprecision(2) << sum << " " << sum2 << " " << sum1 << " " << sumch << " " << sumle;
    return 0;
}

