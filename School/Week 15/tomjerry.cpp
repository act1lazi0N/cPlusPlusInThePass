#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << 1 << "\n";
        }
        else
            cout << 0 << "\n";
    }
}

