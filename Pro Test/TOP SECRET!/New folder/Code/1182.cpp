#include <bits/stdc++.h>
using namespace std;
int main() {
    int e, f, n, p[501], w[501], best[10001];
    scanf("%d%d%d", &e, &f, &n);
    for (int i = 1; i <= n; i++) scanf("%d%d", &p[i], &w[i]);
    best[0] = 0;
    for (int i = 1; i <= f-e; i++) {
        best[i] = 1e9;
        for (int j = 1; j <= n; j++)
            if (w[j] <= i)
                best[i] = min(best[i], best[i-w[j]] + p[j]);
    }
    if (best[f-e] == 1e9) printf("impossible\n");
    else printf("%d\n", best[f-e]);
}
