#include<bits/stdc++.h>
#define ll long long
using namespace std;

//vector<int> sw(ll x)
//{
//    vector<ll> a;
//    if (x == 1)
//    {
//        return a;
//    }
//    ll i = 0;
//    for (i = x - 1; i > 0; i--)
//    {
//        if (a[i] > a[i-1])
//        {
//            break;
//        }
//    }
//    if (i != 0)
//    {
//        for (ll j = x - 1; j => i; j--)
//        {
//            if (a[i-1] < a[i])
//            {
//                swap(a[i-1], a[j]);
//                break;
//            }
//        }
//    }
//    reverse(a.begin() + i,  a.end());
//    return a;
//}
void sp(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}
void sw(char c[], ll x)
{
    int i, j;
    for (i = x - 1; i > 0; i--)
    {
        if (c[i] > c[i-1])
        {
            break;
        }
    }
    if (i == 0)
    {
        return;
    }
    int a = c[i-1], s = i;
    for (j = i + 1; j < a; j++)
    {
        {
            if (c[j] > a && c[j] < c[s])
            {
                s = j;
            }
        }
    }
    sp(&c[s], &c[i-1]);
    sort(c + i, c + x);
    cout << c;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char d[101];
    cin >> d;
    ll x = strlen(d);
    sw(d, x);
    return 0;

}
