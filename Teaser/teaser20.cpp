#include<iostream>
using namespace std;
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n;
    long S = 0, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt++;
            S = S + i;
        }
    }
    cout << cnt << " " << S;
}
