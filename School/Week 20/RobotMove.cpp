#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int cnt1, cnt2;
    cnt1 = abs(x1 - x2);
    cnt2 = abs(y1 - y2);
    cout << max(cnt1, cnt2);
}
