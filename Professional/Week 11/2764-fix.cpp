#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
string s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int cnt1 = 0, cnt2 = 0, ans = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(') cnt1++;
            else if (s[i] == '[')
            {
                cnt2++;
            }
            else if (s[i] == ')' && cnt1 > 0)
            {
                ans++;
                cnt1--;
            }
            else if (s[i] == ']' && cnt2 > 0)
            {
                ans++;
                cnt2--;
            }
        }
        cout << ans << "\n";
    }
}
