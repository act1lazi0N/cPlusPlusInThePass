#include<bits/stdc++.h>
using namespace std;

int partitions(int a[], int l, int r)
{
    int pivot = a[r]; //phần từ bên phải cùng
    int i = (l - 1);
    for (int j = l; j < r ; j++)
    {
        if (a[j] <= pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    // đưa chốt về giữa
    ++i;
    swap(a[i], a[r]);
    return i; // vị trí
}
void qsort(int a[], int l, int r)
{
    if (l >= r) return;
    int p = partitions(a, l, r);
    qsort(a, l, p - 1);
    qsort(a, p + 1, r);
}
int main()
{
    int n;
    int a[1000];
    cin>> n;
    //rand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;

}
