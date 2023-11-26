#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll t;
ll a[100001];
ll l = 1, r = 1e9;
ll mid = (l + r)/2;
ll ans;

bool bs(ll mid)
{
    while(l < r)
    {
        if (a[mid] == t)
        {
            return true;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}


int main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    if

}










//int check(ll mid)
//{
//    ll s = 0;
//    for (ll i = 1; i <= n; i++)
//    {
//        s = s + (mid/a[i]);
//
//        if (s >= t)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    cin >> n >> t;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a+1, a+n+1);
//    ll l = 1, r = a[n]*t;
//    while(l < r)
//    {
//        ll mid = (l + r)/2;
//        if (check(mid) == 0)
//        {
//            r = mid;
//        }
//        else
//            l = mid + 1;
//    }
//    cout << r;
//}
