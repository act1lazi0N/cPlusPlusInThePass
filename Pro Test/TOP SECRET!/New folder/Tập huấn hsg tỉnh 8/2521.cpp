#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    freopen("2521.inp", "r", stdin);
    freopen("2521.out", "w", stdout);
    ll t;
    cin >> t;
    /*
    phân tích n thành dạng n= 3^c3 * 2^c2 * n'
    biến đổi được n về 1 khi và chỉ khi n'=1 và c3>=c2
    số bươc tối thiểu = c2+(c3-c2)*2 = 2*c3-c2
    */
    ll n, c2,c3;
    for (ll i=0; i<t; i++)
    {
        c2=0; c3=0;
        cin >> n;
        while (n%3==0)
        {
            n=n/3;
            c3++;
        }
        while(n%2==0)
        {
            n=n/2;
            c2++;
        }
        if (n==1 && c2<=c3)
            cout << 2*c3-c2 << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
