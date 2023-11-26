#include<bits/stdc++.h>
using namespace std;

// tìm kiếm tuần tự (sequential searching)
int seqSearch(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}
// tìm kiếm nhij phân (binary searching)
int binarySearch(int x)
{
    int l = 1, r = n;
    while(l < r)
    {
        int c = (l + r) / 2;
        if (x <= a[c])
        {
            r = c;
        }
        else
            l = c + l;
    }
    if (a[i] == x)
        return 1;
    return -1;
}
