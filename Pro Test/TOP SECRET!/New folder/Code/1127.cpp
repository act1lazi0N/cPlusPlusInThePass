#include <bits/stdc++.h>
using namespace std;

int n, m, a, b[100001], p[100001];

bool thue(int c) {
    long long s = 0;
    for (int i = 1; i <= c; i++)
        s += max(p[i] - b[n-c+i], 0);
    return s <= a;
}

int main () {
    scanf("%d%d%d", &n, &m, &a);
    for (int i = 1; i <= n; i++)
        scanf("%d", &b[i]);
    for (int i = 1; i <= m; i++)
        scanf("%d", &p[i]);
    sort(b+1, b+1+n);
    sort(p+1, p+1+m);
    int l = 0, r = min(n, m);
    while (l < r) {
        int c = (l+r+1)/2;
        if (thue(c))
            l = c;
        else
            r = c - 1;
    }
    long long s = 0;
    for (int i = 1; i <= r; i++)
        s += p[i];
    s = max(s - a, 0ll);
    printf("%d %lld\n", r, s);
}
