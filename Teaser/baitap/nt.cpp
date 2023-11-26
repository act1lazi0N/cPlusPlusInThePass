#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool kiem_tra_nguyen_to(ll a)
{
    for (ll i = 2; i < a; i ++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
void subtask1 (ll a, ll b)
{
    if (kiem_tra_nguyen_to (b * b - a * a) == true)
        cout << "YES";
    else
        cout << "NO";
}
void solve (ll a, ll b)
{
    ll tg = sqrt (a + b);
    bool check [tg + 1];
    fill (check + 1, check + tg + 1, true);
    check [1] = false;
    for (int i = 1; i <= tg; i ++)
    {
        if (check [i] == true)
        {
            for (int j = i * i; j <= tg; j += i)
                check [j] = false;
        }
    }
    for (int i = 1; i <= tg; i ++)
    {
        if (check [i] == true && (a + b) % i == 0)
            cout << "NO";
    }
    cout << "YES";
}
int main()
{
    ll a, b;
    cin >> a >> b;
    if (a <= b && b <= 100){
        subtask1(a,b);
        return 0;
    }
    else
    {
        if (b - a == 1)
        {
            solve(a,b);
            return 0;
        }
        else
        {
            if (kiem_tra_nguyen_to(b - a) == true)
            {
                solve (a,b);
                return 0;
            }
        }
    }
}
