#include<bits/stdc++.h>
using namespace std;

void nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int Min (float a[], int n)
{
    int Min = a[0];
    for (int i = 1; i < n; i++)

        if (Min > a[i])
            Min = a[i];

    return Min;
}
int Max (float a[], int n)
{
    int Max = a[0];
    for (int i = 1; i < n; i++)

        if (Max < a[i])
            Max = a[i];

    return Max;
}
int main()
{
    int n;
    cin >> n;
    float a[100];
    nhap(a, n);
    cout << setprecision(3) << Min(a, n) << " " << Max(a, n);
    return 0;
}
