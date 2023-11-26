#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[101];
    cout << "Nhap N: "; cin >> n;
    cout << "Nhap day: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i+1 << "]= "; cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > 0 && a[j] > 0)
            {
                if (a[i] < a[j])
                {
                    swap(a[i], a[j]);
                }
            }
            if (a[i] < 0 && a[j] < 0)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
    cout << "Day so theo yeu cau la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << a[i] << " ";
        }
    }
}
