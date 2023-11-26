#include <bits/stdc++.h>
using namespace std;

int n, k, a[100001], b[100001];

bool check(long long m) {
   long long k1 = 0;
   for (int i = 1; i <= n; i++) {
       k1 += max(0ll, a[i]*m - b[i]);
       if (k1 > k) return false;
   }
   return true;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   cin>>n>>k;
   for (int i = 1; i <= n; i++)
       cin>>a[i];
   for (int i = 1; i <= n; i++)
       cin>>b[i];
   long long l = 0, r = 2e9 + 1;
   while (l < r) {
       long long m = (l+r+1) / 2;
       if (check(m))
           l = m;
       else
           r = m-1;
   }
   cout<<l;
}
