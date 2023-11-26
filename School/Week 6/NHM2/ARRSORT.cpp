#include<bits/stdc++.h>
using namespace std;



void tang(int n, float a[])
{
    int sw;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                sw = a[i];
                a[i] = a[j];
                a[j] = sw;
            }
        }
    }
    cout << fixed << setprecision(2) << a[0];
    for (int i = 1; i < n; i++)
    cout << fixed << setprecision(2) <<" " << a[i];
    cout << endl;
}
void giam(int n, float a[])
{
    int sw;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                sw = a[i];
                a[i] = a[j];
                a[j] = sw;
            }
        }
    }
    cout << fixed << setprecision(2) << a[0];
    for (int i = 1; i < n; i++)
    cout << fixed << setprecision(2) << " " << a[i];
}

int main()
{
    int n;
    float a[1001];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    tang(n, a);
    giam(n, a);

    return 0;

}
