#include<bits/stdc++.h>
#define ll long long
using namespace std;

////void solve(int a[], int n)
////{
////    int i;
////    set<int> s;
////    for (int i = 0; i < n; i++)
////    {
////        s.insert(a[i]);
////    }
////    set<int>::iterator it;
////    for (it = s.begin(); it != s.end(); ++it)
////    {
////        cout << *it << " ";
////    }
////}
////int main()
////{
////    int n;
////    cin >> n;
////    int a[n];
////    for (int i = 1; i <= n; i++)
////    {
////        cin >> a[i];
////    }
////    solve(a, n);
////}
int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n];
    int sa = 0, sd = 0;
    ll t = 0, m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0) sa++;
        if (a[i] > 0) sd++;
        t+= a[i];
    }
    if (sd == 0)
    {
        cout << sa;
        return 0;
    }
    if (sa == 0)
    {
        cout << sd;
        return 0;
    }
    if (t == 0)
    {
        cout << 0;
        return 0;
    }
    sort(a, a+n);
    m = 0 - t;
    int x = 0, y = n - 1;
    while(m != 0)
    {
        if (m < 0) {m += a[y]; y--; ans++;}
        if (m > 0) {m += a[x]; x++; ans++;}
    }
    cout << ans;
}
